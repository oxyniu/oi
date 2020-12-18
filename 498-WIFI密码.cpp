#include<bits/stdc++.h>
using namespace std;
string pass = "NOIP@CCF";
string userpass;
vector<string> pr;
int main()
{
	char c;
	freopen("wifi.in","r",stdin);
	freopen("wifi.out","w",stdout);
	while(1)
	{
		cin>>c;
		if(c=='N')break;
		cin >> userpass;
		if(userpass==pass){
			pr.push_back("Success");
			break;
		}
		else{
			pr.push_back("Sorry");
		}
	}
	for (int i = 0;i < pr.size();i++) {
		cout << pr[i] << endl;
	}
	return 0;
}