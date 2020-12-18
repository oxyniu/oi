#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int a[11];
int main()
{
	int i,h,s=0;
	freopen("apple.in","r+",stdin);
	freopen("apple.out","w",stdout);
	for(i=1;i<=10;i++)
	{
		cin>>a[i];
	}
	cin>>h;
	for(i=1;i<=10;i++)
	{
		if(h+30>=a[i])	s++;
	}
	cout<<s;
	return 0;
}