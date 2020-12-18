#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,p=0,n;
	cin>>n;
	for(j=0;j<=n/50;j++)
	{
		p+=(n-j*50)/20+1;
	}
	cout<<p;
}
