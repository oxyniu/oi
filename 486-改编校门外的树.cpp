#include<bits/stdc++.h>
using namespace std;
int htree[10001];
int main()
{
	int i,j,l,m,p,q,count=0,ma=-1,mi=10000000;
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	cin>>l>>m;
	for(i=0;i<=l;i++)
	{
		cin>>htree[i];
	}
	for(i=1;i<=m;i++)
	{
		cin>>p>>q;
		ma=max(ma,q);
		mi=min(mi,p);
	}
	if(ma-mi>=100)	ma=mi+99;
	for(i=mi;i<=ma;i++)
	{
		cout<<htree[i]<<" ";
	}
	return 0;
}