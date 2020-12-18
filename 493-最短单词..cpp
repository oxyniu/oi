#include<bits/stdc++.h>
using namespace std;
char s[201];
char minsize[21];
int main()
{
	int count=0,flcount=1,mins=200,i,j;
	char p;
	freopen("words.in","r",stdin);
	freopen("words.out","w",stdout);
	while((p=getchar())!='.')	s[++count]=p;
	s[count+1]=' ';
	for(i=1;i<=count+1;i++)
	{
		if(s[i]==' ')
		{
			if(i-flcount<mins)
			{
				for(j=1;j<=20;j++)
				{
					minsize[j]=0;
				}
				for(j=flcount;j<=i-1;j++)
				{
					minsize[j-flcount+1]=s[j];
				}
				mins=i-flcount;
			}
			flcount=i+1;
		}
	}
	for(i=1;i<=20;i++)
	{
		if(minsize[i])
		{
			cout<<minsize[i];
		}
	}
	return count;
}