#include<bits/stdc++.h>
using namespace std;

int s[100];

int main(){
	freopen("jfzp.in","r",stdin);
	freopen("jfzp.out","w",stdout);
	int n;
	cin>>n;
	int tmp_ad=0;
	for(int i=0;i<n;i++){
		cin>>s[i];
		tmp_ad+=s[i];
	}
	int avs=tmp_ad/n;
	int con_=0,con_r=0;
	for(int i=0;i<n;i++){
		s[i]+=con_r;
		if(s[i]!=avs){
			con_r=s[i]-avs;
			con_++;
		}
		else con_r=0;
	}
	cout<<con_;
}