f1=open('expression.in','r')
f2=open('expression.out','w')
s=f1.read()
p=''
g=0
for i in s:
    if i=='+':
        g+=int(p)
        p=''
    else:
        p+=i
g+=int(p)
f2.write(str(g))
