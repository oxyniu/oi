#include<bits/stdc++.h>
using namespace std;
//Sept 14 2020
int main()
{
	double i,p,a,sum,ans;
	cin>>p;
	for(i=1;i<=p;i++)
	{
		cin>>a;
		sum=sum+a;
	}
	ans=sum/p;
	printf("%.2f\n",(float)ans);
	return 0;
}