#include<bits/stdc++.h>
int c=0;
int n;
void queen(int a[],int cur){
	if(cur==n)c++;
	for(int i=0;i<n;i++){
		a[cur]=i;
		int flag=true;
		for(int j=0;j<cur;j++)if(a[j]==i||std::abs(i-a[j])==cur-j)flag=false;
		if(flag)queen(a,cur+1);
	}
}
int main(){
	std::freopen("queen.in","r",stdin);
	std::freopen("queen.out","w",stdout);
	std::cin>>n;
	int a[n];
	for(int i=0;i<n;i++)a[i]=0;
	queen(a,0);
	std::cout<<c;
}