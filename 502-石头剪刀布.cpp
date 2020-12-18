#include<bits/stdc++.h>
using namespace std;

//#define DEBUG__

bool iswin(char p,char q){
	return (p=='R'&&q=='S')||(p=='S'&&q=='P')||(p=='P'&&q=='R') ? true : false;
}

int main(){
#ifndef DEBUG__
	freopen("battle.in","r",stdin);
	freopen("battle.out","w",stdout);
#endif
			//main()
	int r,c,n;
	char s[100][100]={0};
	cin>>r>>c>>n;
			//insert
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>s[i][j];
		}
	}
			//main_cycle
	for(int i=0;i<n;i++){
		char tmp_v[100][100]={0};
		for(int x=0;x<r;x++){
			for(int y=0;y<c;y++){
				if(x>0&&iswin(s[x][y],s[x-1][y]))tmp_v[x-1][y]=s[x][y];
				if(x<r-1&&iswin(s[x][y],s[x+1][y]))tmp_v[x+1][y]=s[x][y];
				if(y>0&&iswin(s[x][y],s[x][y-1]))tmp_v[x][y-1]=s[x][y];
				if(y<c-1&&iswin(s[x][y],s[x][y+1]))tmp_v[x][y+1]=s[x][y];
			}
		}
		for(int x=0;x<r;x++){
			for(int y=0;y<c;y++){
				if(tmp_v[x][y])s[x][y]=tmp_v[x][y];
			}
		}
	}
			//output
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<s[i][j];
		}
		cout<<endl;
	}
	return 0;
}