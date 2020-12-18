#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned int a,sum;
	cin>>a;
	sum=a%10+(a/10)%10+(a/100)%10+(a/1000)%10+(a/10000)%10+(a/100000)%10+(a/1000000)%10+(a/10000000)%10+(a/100000000)%10+(a/1000000000)%10+(a/10000000000)%10;
	cout<<sum;
	return 0;
}