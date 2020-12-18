#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k,x;
	int res=1;
	int a=10;
	cin>>n>>m>>k>>x;
	while(k)
	{
		if(k&1)
		{
			res=(a*res)%n;
		}
		a=(a*a)%n;
		k=k>>1;
	}
	res=(m*res+x)%n;
	cout<<res<<endl;
	return 0;
}