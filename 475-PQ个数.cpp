#include<bits/stdc++.h>
using namespace std;
int abc(int a,int b,int x,int y)
{
	int r1,r2,a0=a,b0=b,s;
	while(s=a%b)
	{
		a=b;
		b=s;
	}
	r1=b;
	r2=(a0*b0)/r1;
	if(r1==x&&r2==y)
	{
		return true;
	}
	return false;
}
int main()
{
	int x0,y0,i,j,p=0;
	cin>>x0>>y0;
	for(i=x0;i<=100000;i+=x0)
	{
		
		if(y0%i!=0)	continue;
		for(j=x0;j<=i;j+=x0)
		{
			
			if(y0%j!=0)	continue;
			if(abc(i,j,x0,y0))	p++;
		}
	}
	cout<<p*2;
	return 0;
}