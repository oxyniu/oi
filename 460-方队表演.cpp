

#include<bits/stdc++.h>
using namespace std;
int main()
{
	double i,a,ma=0,mi=100,sum=0,ans;
	for(i=1;i<=10;i++)
	{
		cin>>a;
		sum+=a;
		ma=max(a,ma);
		mi=min(a,mi);
	}
	ans=(sum-ma-mi)/8;
	cout<<ans;
	return 0;
}