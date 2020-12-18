#include<bits/stdc++.h>
using namespace std;

void two(int n){
	if(n==2){cout<<"2";return;}
	if(n==1){cout<<"2(0)";return;}
	int s=0,p=1;
	while(p<=n){
		p*=2;
		s++;
	}
	if(n==p/2){
		cout<<"2(";
		two(s-1);
		cout<<")";
	}
	if(n>p/2){
		//cout<<"2(";
		two(p/2);
		cout<<"+";
		two(n-p/2);
	}
	
}

int main()
{
	int n;
	freopen("two.in","r",stdin);
	freopen("two.out","w",stdout);
	cin>>n;
	two(n);
}