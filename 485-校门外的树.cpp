#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int a[10001];
int main()
{
	int l,m,i,s,e,j,sum=0;
	freopen("tree.in","r+",stdin);
	freopen("tree.out","w",stdout);
	scanf("%d",&l);
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&s);
		scanf("%d",&e);
		for(j=s;j<=e;j++)
		{
			a[j]=1;
		}
	}
	for(i=0;i<=l;i++)
	{
		if(a[i]!=1)
		{
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
}