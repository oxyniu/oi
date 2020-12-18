#include<bits/stdc++.h>
using namespace std;
struct num{
	int value,id;
	int rnk;
}a[10000];
int main(){
	freopen("base.in","r",stdin);
	freopen("base.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].value;
		a[i].id=i;
	}
	bool flag;
	do{
		flag=true;
		for(int i=0;i<n-1;i++){
			if(a[i].value>a[i+1].value){
				flag=false;
				swap(a[i],a[i+1]);
			}
		}
	}
	while(!flag);
	a[0].rnk=1;
	for(int i=1;i<n;i++)a[i].rnk=a[i-1].value==a[i].value ? a[i-1].rnk : a[i-1].rnk+1;
	do{
		flag=true;
		for(int i=0;i<n-1;i++){
			if(a[i].id>a[i+1].id){
				flag=false;
				swap(a[i],a[i+1]);
			}
		}
	}
	while(!flag);
	for(int i=0;i<n;i++){
		cout<<a[i].rnk<<" ";
	}
	return 0;
}