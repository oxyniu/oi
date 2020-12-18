#include<stdio.h>
using namespace std;
int apple(int m,int n){
	return m==0||n==1 ? 1 : (m<n ? apple(m,m) : apple(m,n-1)+apple(m-n,n));
}
int main(){
	freopen("apple.in","r",stdin);
	freopen("apple.out","w",stdout);
	int n,p,q;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d",&p,&q);
		printf("%d\n",apple(p,q));
	}
	return 0;
}