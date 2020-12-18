#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,i,ans=0;
	cin>>a;
	if(a<=1000000)
	{
		for(i=1;i<=a;i++)
		{
			if(a%i==0)
			{
				ans++;
			}
		}
		cout<<ans;
	}
	else
	{
		for(i=1;i<=sqrt(a);i++)
		{
			if(a%i==0)
			{
				ans++;
			}
		}
		cout<<ans*2;
	}
	return 0;
}