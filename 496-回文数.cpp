#include<bits/stdc++.h>
//define
std::string s;
int r,n,sum,a[1010];
//plus_func
int jia(int n) {
    int c[1010]={0};
    for(int i=1;i<=n;i++){
        c[i]=a[i]+a[n-i+1]+c[i];
        c[i+1]+=c[i]/r;
        c[i]%=r;
    }
    if(c[n+1])n++;
    for(int i=1;i<=n;i++)a[i]=c[i];return n;
}
//hws main
int hws(int n){
    for(int i=1;i<=n/2;i++)if(a[n-i+1]!=a[i])return 0;
    return 1;
}
//main
int main(){
    std::freopen("hws.in","r",stdin);
    std::freopen("hws.out","w",stdout);
    std::cin>>r>>s;n=s.length();
    for(int i=1;i<=n;i++) {
        if(s[i-1]<65)a[i]=s[i-1]-'0';
        else a[i]=s[i-1]-55;
    }
    while(sum<=30){
        if(hws(n)){
            std::cout<<sum<<std::endl;
            return 0;
        }
        sum++;n=jia(n);
    }
    std::cout<<"impossible";return 0;
}