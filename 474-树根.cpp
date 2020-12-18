#include<bits/stdc++.h>
using namespace std;
int sg(int a)
{
	int sum;
	sum=a%10+(a/10)%10+(a/100)%10+(a/1000)%10+(a/10000)%10+(a/100000)%10+(a/1000000)%10+(a/10000000)%10+(a/100000000)%10+(a/1000000000)%10+(a/10000000000)%10;
	return sum;
}
int main()
{
	int n;
	cin>>n;
	while(n/10!=0)
	{
		n=sg(n);
	}
	cout<<n;
}