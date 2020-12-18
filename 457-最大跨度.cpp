#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,p,ma=-1,mi=1001;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>p;
		ma=max(p,ma);
		mi=min(p,mi);
	}
	cout<<ma-mi<<endl;
	return 0;
}