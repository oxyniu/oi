#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i;
	int k[5001]={0},s[5001]={0};
	bool flag=true;
	freopen("v.in","r+",stdin);
	freopen("v.out","w",stdout);
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>k[i];
		cin>>s[i];
	}
	do
	{
		flag=true;
		for(i=1;i<=n-1;i++)
		{
			if(s[i]<s[i+1])
			{
				swap(s[i],s[i+1]);
				swap(k[i],k[i+1]);
				flag=false;
			}
			if(s[i]==s[i+1]&&k[i]>k[i+1])
			{
				swap(k[i],k[i+1]);
				flag=false;
			}
		}
	}
	while(flag==false);
	int te=floor(m*1.5);
	int p=s[te];
	int count=0;
	for(i=1;i<=n;i++)
	{
		if(s[i]>=p)
		{
			count++;
		}
	}
	cout<<p<<" "<<count<<endl;
	for(i=1;i<=count;i++)
	{
		cout<<k[i];
		cout<<" ";
		cout<<s[i];
		cout<<endl;
	}
	return 0;
}