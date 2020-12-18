#include<bits/stdc++.h>
using namespace std;
int yw[301];
int sx[301];
int yy[301];
int od[301];
int tot[301];
int main()
{
	int n,i;
	bool flag;
	freopen("scholarship.in","r",stdin);
	freopen("scholarship.out","w",stdout);
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>yw[i];
		cin>>sx[i];
		cin>>yy[i];
		od[i]=i;
		tot[i]=yw[i]+sx[i]+yy[i];
	}
	do
	{
		flag=true;
		for(i=1;i<=n-1;i++)
		{
			if(tot[i]<tot[i+1])
			{
				swap(tot[i],tot[i+1]);
				swap(yw[i],yw[i+1]);
				swap(od[i],od[i+1]);
				flag=false;
			}
		}
	}
	while(flag==false);
	do
	{
		flag=true;
		for(i=1;i<=n-1;i++)
		{
			if(tot[i]==tot[i+1]&&yw[i]<yw[i+1])
			{
				swap(tot[i],tot[i+1]);
				swap(yw[i],yw[i+1]);
				swap(od[i],od[i+1]);
				flag=false;
			}
		}
	}
	while(flag==false);
	do
	{
		flag=true;
		for(i=1;i<=n-1;i++)
		{
			if(tot[i]==tot[i+1]&&yw[i]==yw[i+1]&&od[i]>od[i+1])
			{
				swap(tot[i],tot[i+1]);
				swap(yw[i],yw[i+1]);
				swap(od[i],od[i+1]);
				flag=false;
			}
		}
	}
	while(flag==false);
	if(n<5)
	{
		for(i=1;i<=n;i++)
		{
			cout<<od[i]<<" "<<tot[i]<<endl;
		}
	}
	for(i=1;i<=5;i++)
	{
		cout<<od[i]<<" "<<tot[i]<<endl;
	}
	return 0;
}