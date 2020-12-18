#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,i;
	cin>>a>>b;
	for(i=2;i<=a;i++)
	{
		if(a%i==0&&b%i==0)
		{
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
	return 0;
}