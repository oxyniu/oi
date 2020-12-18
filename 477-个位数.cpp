#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,i;
	cin>>a>>b;
	int a0=a;
	int res=1;
	a=a%10;
	while(b)
	{
		if(b%2==1)
		{
			res=(res*a)%10;
		}
		a=(a*a)%10;
		b=b>>1;
	}
	cout<<res;
}