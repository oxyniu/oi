#include<bits/stdc++.h>
using namespace std;
int main()
{
	double l,r,i,p=0,j;
	cin>>l>>r;
	for(i=l;i<=r;i++)
	{
		for(j=0;j<10;j++)
		{
			if(((int)(i/pow(10.0,j)))%10==2)
			{
				p++;
			}
		}
	}
	cout<<p;
}
