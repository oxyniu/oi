#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool num[60000001];
ll prime[60000001];
int main(){
	freopen("prinme.in","r",stdin);
	freopen("prinme.out","w",stdout);
	ll n;
	ll number=0;
	cin>>n;
	for(ll i=2;i<=n;i++){
		if(!num[i])prime[number++]=i;
		for(ll j=0;j<number&&i*prime[j]<=n;j++){
			num[i*prime[j]]=1;
			if(i%prime[j]==0)break;
		}
	}
	cout<<number;
	return n;
}