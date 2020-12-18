#include<bits/stdc++.h>
using namespace std;

int n;
int ans[1000];

void fc(int step){
	int b[100]={0};
	if(step==n){
		for(int i=0;i<step;i++)cout<<ans[i]<<" ";
		cout<<endl;
	}
	else{
		for(int i=0;i<step;i++)b[ans[i]]++;
		for(int i=1;i<=n;i++){
			if(b[i]==0){
				ans[step]=i;
				fc(step+1);
			}
		}
	}
}

int main(){
	freopen("array.in","r",stdin);
	freopen("array.out","w",stdout);
	cin>>n;
	fc(0);
	return 0;
}