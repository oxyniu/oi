#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int s[10000];
int main()
{
	int n,m,p,i,j;
	freopen("item.in","r",stdin);
	freopen("item.out","w",stdout);
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>p;
		a.push_back(p);
	}
	cin>>m;
	for(i=0;i<m;i++)	cin>>s[i];
	sort(a.begin(),a.end());
	a.erase(unique(a.begin(),a.end()),a.end());
	/*
	for(i=0;i<m;i++)
	{
		vector<int>::iterator tmp=find(a.begin(),a.end(),s[i]);
		vector<int>::iterator tmpl=tmp-1;
		vector<int>::iterator tmpu=tmp+1;
		if(*tmp-*tmpl<=*tmpu-*tmp)
		{
			cout<<*tmpl<<endl;
		}
		else
		{
			cout<<*tmpu<<endl;
		}
	}
	*/
	a.push_back(1000000001);
	for(i=0;i<m;i++)
	{
		for(j=0;j<a.size()-1;j++)
		{
			if(s[i]>=a.at(j)&&s[i]<=a.at(j+1))
			{
				if(s[i]-a.at(j)<=a.at(j+1)-s[i])	cout<<a.at(j)<<endl;
				else	cout<<a.at(j+1)<<endl;
				break;
			}
		}
		if(s[i]<a.at(0))
		{
			cout<<a.at(0)<<endl;
		}
	}
	return 0;
}