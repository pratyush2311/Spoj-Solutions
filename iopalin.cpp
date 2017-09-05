#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int dp[5002][5002];
char s1[5002],rev[5002];
int  lcs(int m,int  n)
{
	if(m==0||n==0)
	return 0;
	if(dp[m][n]!=-1)
	return dp[m][n];
	if(s1[m-1]==rev[n-1])
	return dp[m][n]=1+lcs(m-1,n-1);
	else
	return dp[m][n]=max(lcs(m-1,n),lcs(m,n-1));
}

int main()
{
	int n,i;
	scanf("%d",&n);
	scanf("%s",s1);
	int m=strlen(s1);
	int k=0;
	for(i=m-1;i>=0;i--)
	{
		rev[k]=s1[i];
		k++;
	}
	memset(dp,-1,sizeof(dp));
	lcs(m,m);
	int res=m-dp[m][m];
	printf("%d",res);
}
