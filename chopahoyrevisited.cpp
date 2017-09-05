#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n;
int dp[30][300];
char s[50];
int solve(ll pos,ll prev_sum)
{
	if(pos==n)
	return 1;
	if(dp[pos][prev_sum]!=-1)
	return dp[pos][prev_sum];
	dp[pos][prev_sum]=0;
	int c=0;
	int sum=0;
	for(int i=pos;i<n;i++)
	{
		sum+=s[i]-'0';
		if(sum>=prev_sum)
		c+=solve(i+1,sum);
	}
	return (dp[pos][prev_sum]=c);
}
int main()
{
	int t=1;
	while(1)
	{
		
		scanf("%s",s);
		if(!(s[0]<='9'&&s[0]>='0'))
		break;
		n=strlen(s);
		for(int i=0;i<30;i++)
		memset(dp[i],-1,sizeof(dp[i]));
		printf("%d. %d\n",t,solve(0,0));
		t++;
	}
}
