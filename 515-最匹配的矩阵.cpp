#include<bits/stdc++.h>
using namespace std;
int a[200][200];
int b[200][200];

int main()
{
	int m,n,r,s,ansx,ansy,vmin=1000001;
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>m>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cin>>r>>s;
	for(int i=0;i<r;i++){
		for(int j=0;j<s;j++){
			cin>>b[i][j];
		}
	}
	
	for(int i=0;i<=m-r;i++){
		for(int j=0;j<=n-s;j++){
			int ad=0;
			for(int p=i;p<i+r;p++){
				for(int q=j;q<j+s;q++){
					ad+=abs(a[p][q]-b[p-i][q-j]);
				}
			}
			if(ad<vmin){
				vmin=ad;
				ansx=i;
				ansy=j;
			}
		}
	}
	
	for(int i=ansx;i<ansx+r;i++){
		for(int j=ansy;j<ansy+s;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}