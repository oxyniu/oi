#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=0,b=0,s=0,n,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		swap(a,b);
		if(a<b)	s+=b-a;
	}
	cout<<s;
	return 0;
}