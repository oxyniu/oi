#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[20];
	long int ans,i,s;
	cin>>a;
	for(i=0;i<=strlen(a)/2-1;i++)
	{
		s=a[strlen(a)-i-1];
		a[strlen(a)-i-1]=a[i];
		a[i]=s;
	}
	if(a[strlen(a)-1]=='-')
	{
		a[strlen(a)-1]=0;
		ans=atoi(a)*-1;
	}
	else
	{
		ans=atoi(a);
	}
	cout<<ans;
}
