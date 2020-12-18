#include<bits/stdc++.h>
using namespace std;
struct Car{
	string s,info;
	int typ,id;
	double vm;
}s[100];
int main(){
	freopen("car.in","r",stdin);
	freopen("car.out","w",stdout);
	int n,t,vid=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int v,m;
		cin>>s[i].s>>v>>m>>s[i].typ>>s[i].info;
		s[i].vm=(double)v/(double)m;
		s[i].id=++vid;
	}
	cin>>t;
	for(int i=0;i<t;i++){
		int tmp;
		cin>>tmp;
		if(tmp==1){
			int tmp_id;
			cin>>tmp_id;
			cout<<s[tmp_id-1].s<<endl;
		}
		else if(tmp==2){
			string tmp_s;
			cin>>tmp_s;
			for(int j=0;j<n;j++)if(s[j].s==tmp_s){
				cout<<s[j].info<<endl;
				break;
			}
		}
		else if(tmp==3){
			double tmp_vm;
			int tmp_ad=0;
			cin>>tmp_vm;
			for(int j=0;j<n;j++)if(s[j].vm>=tmp_vm)tmp_ad++;
			cout<<tmp_ad<<endl;
		}
	}
}