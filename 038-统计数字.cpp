#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
int m[200001];
using namespace std;
int main()
{
	int n,i,s=1;
	freopen("count.in","r",stdin);
	freopen("count.out","w",stdout);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m[i]);
	}
	sort(m+1,m+n+1);
	for(i=2;i<=n;i++)
	{
		if(m[i]==m[i-1])
		{
			s++;//1
		}
		else
		{
			printf("%d %d\n",m[i-1],s);
			s=1;
		}
	}
	printf("%d %d\n",m[i-1],s);
	return 0;
}
