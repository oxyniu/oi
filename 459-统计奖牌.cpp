

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,a,b,c,a0=0,b0=0,c0=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a>>b>>c;
		a0+=a;
		b0+=b;
		c0+=c;
	}
	cout<<a0<<" "<<b0<<" "<<c0<<" "<<a0+b0+c0;
	return 0;
}
