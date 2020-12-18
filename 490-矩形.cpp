#include<bits/stdc++.h>
using namespace std;

typedef struct{
	int l,t,w,h;
}shape;

shape a[1001];
long long ans[1000001];
int ians[1000001];

int main()
{
	int r,n,i,tot=0,sl,j,count=0,fl;
	bool flag;
	freopen("juxing.in","r",stdin);
	freopen("juxing.out","w",stdout);
	cin>>r>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i].l;
		cin>>a[i].t;
		cin>>a[i].w;
		cin>>a[i].h;
		tot+=(a[i].w)*(a[i].h);
	}
	for(i=r;i>=0;i--)
	{
		sl=0;	//sl==a[j]<:x=k;
		for(j=1;j<=n;j++)
		{
			if(i<=a[j].l)	//a[1].l==1,a[2].l==5;a[j]>>x=k;add 0;
			{
				;
			}
			else if(i>=a[j].l+a[j].w)	//a[1].l+w==3,a[2].l+w==7;a[j]<<x=k,add on all S;
			{
				sl+=a[j].w*a[j].h;
			}
			else	//a[j]{/}x=k,add on S left;
			{
				sl+=((i-a[j].l)*(a[j].h));
			}
		}
		if(sl>=tot-sl)	//S.left>=S.right;
		{
			count++;
			ans[count]=2*sl-tot;
			ians[count]=i;
		}
	}
	do
	{
		flag=true;
		for(i=1;i<=count-1;i++)
		{
			if(ans[i]>ans[i+1]||(ans[i]==ans[i+1]&&ians[i]<ians[i+1]))
			{
				swap(ans[i],ans[i+1]);
				swap(ians[i],ians[i+1]);
				flag=false;
			}
		}
	}
	while(flag==false);
	cout<<ians[1];
	return 0;
}