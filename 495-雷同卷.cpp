#include<bits/stdc++.h>
using namespace std;
string ita;
string itb;
int main()
{
	freopen("test.in","r",stdin);
	freopen("test.out","w",stdout);
	getline(cin,ita);
	getline(cin,itb);
	for(int i=0;i<ita.size();i++)
	{
		if(ita[i]==itb[i]&& ita[i]!='\n'&&ita[i]!='\r')
		{
			cout<<i+1<<" ";
		}
	}
	return 0;
}