#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p,q,i,s=0;
	cin>>p;
	for(i=1;i<=10;i++)
	{
		cin>>q;
		if(p+30>=q)
		{
			s++;
		}
	}
	cout<<s;
}
