#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
int a[2223];
using namespace std;
int main()
{
	int i,n,p=0,j;
	freopen("matches.in","r",stdin);
	freopen("matches.out","w",stdout);
	scanf("%d",&n);
	a[0]=6;a[1]=2;a[2]=5;a[3]=5;a[4]=4;
	a[5]=5;a[6]=6;a[7]=3;a[8]=7;a[9]=6;
	for(i=10;i<100;i++)
	{
		a[i]=a[i/10]+a[i%10];
	}
	for(i=100;i<1000;i++)
	{
		a[i]=a[i/100]+a[(i/10)%10]+a[i%10];
	}
	for(i=1000;i<=2222;i++)
	{
		a[i]=a[i/1000]+a[(i/100)%10]+a[(i/10)%10]+a[i%10];
	}

	for(i=0;i<=1111;i++)
	{
		for(j=0;j<=1111;j++)
		{
			if(n==a[i]+a[j]+a[i+j]+4)
			{
				p++;
			}
		}
	}
	printf("%d",p);
	return 0;
}
