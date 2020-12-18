#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,m,k,x,a=1,b=10;
	freopen("circle.in","r",stdin);
	freopen("circle.out","w",stdout);
	cin>>n>>m>>k>>x;
	while(k){
		if(k%2==1)a=(a*b)%n;
		b=(b*b)%n;
		k>>=1;
	}
	cout<<(m*a+x)%n;
	return 0;
}