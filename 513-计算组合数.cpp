#include<bits/stdc++.h>
using namespace std;

//long long f(int x){
//	return x==1 ? 1 : f(x-1)*x;
//}

long long f(int x){
	long long s=1;
	for(int i=1;i<=x;i++)s*=i;
	return s;
}
long long c(int n,int m){
	long long i=f(n)/(f(m)*f(n-m));
	return i;
}
int main()
{
	int n,m;
	freopen("cnm.in","r",stdin);
	freopen("cnm.out","w",stdout);
	cin>>n>>m;
	cout<<c(n,m);
	return 0;
}