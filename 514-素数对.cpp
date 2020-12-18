#include<bits/stdc++.h>
using namespace std;

bool isss(int x)
{
	for(int i=2;i<=sqrt(x);i++)if(!(x%i))return false;
	return true;
}

int main()
{
	int n;
	freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	cin>>n;
	for(int i=2;i<=n-2;i++)if(isss(i)&&isss(i+2))cout<<i<<" "<<i+2<<endl;
	return 0;
}