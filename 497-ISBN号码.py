fin  =  open("isbn.in","r")
fout =  open("isbn.out","w")
s    =  fin.read().strip()
p    =  []
ad   =  0
for i in s:
	if i!='-' and i!='X':
		p.append(int(i))
	if i=='X':
		p.append(10)
for i in range(len(p)-1):
	ad += p[i]*(i+1)
if ad%11==p[-1]:
	fout.write("Right")
else:
	fout.write(str(p[0])+'-'+str(p[1])+str(p[2])+str(p[3])+'-'+str(p[4])+str(p[5])+str(p[6])+str(p[7])+str(p[8])+'-')
	if ad%11!=10:
		fout.write(str(ad%11))
	else:
		fout.write('X')
fin.close()
fout.close()
