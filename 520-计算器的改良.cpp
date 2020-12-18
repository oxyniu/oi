#include<string>
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

string f;
char x='\0';
int fax=0,fan=0,fbx=0,fbn=0,pos_equal;

int collect(int pos){
	int tmp=-1,i,ad=0;
	for(i=pos;i<f.size();i++)if(f[i]<'0'||f[i]>'9')break;
	for(int j=i-1;j>=pos;j--){
		ad+=(f[j]-'0')*int(pow(10,++tmp));
	}
	
	if(pos==0||pos==pos_equal+1||f[pos-1]=='+'){
		if(i==pos_equal||i==f.size()||f[i]=='+'||f[i]=='-'){
			if(pos<pos_equal)fan+=ad;
			else fbn+=ad;
		}
		else{
			if(pos<pos_equal)fax+=ad;
			else fbx+=ad;
		}
	}
	else{
		if(i==pos_equal||i==f.size()||f[i]=='+'||f[i]=='-'){
			if(pos<pos_equal)fan-=ad;
			else fbn-=ad;
		}
		else{
			if(pos<pos_equal)fax-=ad;
			else fbx-=ad;
		}
	}
	return i;
}

int main(){
	freopen("calculator.in","r",stdin);
	freopen("calculator.out","w",stdout);
	getline(cin,f);
	;
	for(int i=0;i<f.size();i++){
		if(f[i]=='='){
			pos_equal=i;
			break;
		}
	}
	for(int i=0;i<f.size();){
		if(f[i]>='0'&&f[i]<='9')i=collect(i);
		if(f[i]>='a'&&f[i]<='z')x=f[i];
		i++;
	}
	
	double ans=(fbn+0.0-fan)/(fax-fbx);
	printf("%c=%.3lf",x,ans);
	return 0;
}