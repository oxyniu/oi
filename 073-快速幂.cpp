#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("ksm.in","r",stdin);
	freopen("ksm.out","w",stdout);
	long long k,res=1,a,n;
	//a^k mod n
	cin>>a>>k>>n;

	while(k)
	{
		if(k&1)
		{
			res=(a*res)%n;
		}
		a=(a*a)%n;
		k=k>>1;
	}
	cout<<res;
	return 0;
}
