#include<bits/stdc++.h>
using namespace std;
struct wm{
	string name;
	int time;
}s[100];
int main(){
	freopen("numk.in","r",stdin);
	freopen("numk.out","w",stdout);
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++)cin>>s[i].name>>s[i].time;
	bool flag;
	do{
		flag=true;
		for(int i=0;i<n-1;i++){
			if(s[i].time>s[i+1].time){
				flag=false;
				swap(s[i],s[i+1]);
			}
		}
	}
	while(!flag);
	cout<<s[k-1].name;
}