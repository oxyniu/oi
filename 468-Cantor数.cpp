#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x=1,y=1;
	bool flag=false;
	bool pos;
	freopen("cantor.in","r",stdin);
	freopen("cantor.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n-1;i++)
	{
		if(x==1)
		{
			if(flag)
			{
				flag=false;
				x++;y--;pos=false;continue;
			}
			else
			{
				flag=true;
				y++;continue;
			}
		}
		if(y==1)
		{
			if(flag)
			{
				flag=false;
				x--;y++;pos=true;continue;
			}
			else
			{
				flag=true;
				x++;continue;
			}
		}
		if(pos)
		{
			x--;y++;
		}
		else
		{
			x++;y--;
		}
	}
	cout<<x<<"/"<<y;
	return 0;
}