#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,x,p=0;
	for(i=1;i<=25;i++)
	{
		cin>>x;
		p=p^x;
	}
	cout<<p;
}