#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,count=0,n;
	int a[101],b[1001]={0};
	freopen("random.in","r",stdin);
	freopen("random.out","w",stdout);
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		b[a[i]]++;
	}
	for(i=1;i<=1000;i++)
	{
		if(b[i]!=0)	count++;
	}
	cout<<count<<endl;
	for(i=1;i<=1000;i++)
	{
		if(b[i]!=0)	cout<<i<<" ";
	}
	return 0;
}