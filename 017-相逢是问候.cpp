#include<bits/stdc++.h>
using namespace std;

map<string,string> dict;

int main(){
	freopen("greet.in","r",stdin);
	freopen("greet.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		string name,id;
		cin>>name>>id;
		dict[name]=id;
		dict[id]=name;
	}
	for(int i=0;i<m;i++){
		string query,ans;
		cin>>query;
		ans=dict[query];
		if(ans.empty())cout<<"ERROR"<<endl;
		else cout<<ans<<endl;
	}
	return 0;
}
