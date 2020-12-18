#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
	int i,m[13],b=0,s=0,en;
	freopen("save.in","r",stdin);
	freopen("save.out","w",stdout);
	for(i=1;i<=12;i++)
	{
		scanf("%d",&m[i]);
	}
	for(i=1;i<=12;i++)
	{
		b=b+300;
		b=b-m[i];
		if(b>=100)
		{
			s=s+(b/100)*100;
			b=b-(b/100)*100;
			
		}
		else
		{
			if(b<0)
			{
				printf("-%d",i);
				return 0;
			}
		}
	}
	en=b+(s*12)/10;
	printf("%d",en);
	return 0;
}
