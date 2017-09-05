#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[3][500];
ll solve(ll n,ll m)
{
	if(dp[n][m]!=-1)
	return dp[n][m];
	if(m==0)
	return 1;
	if(n==0)
	return dp[n][m]=solve(0,m-1)+solve(1,m-1);
	if(n==1)
	return dp[n][m]=solve(0,m-1)+solve(2,m-1)+solve(1,m-1);
	if(n==2)
	return dp[n][m]=solve(1,m-1)+solve(2,m-1);
}
int main()
{
	ll n;
	scanf("%lld",&n);
	memset(dp,-1,sizeof(dp));
	ll res=solve(0,n-1)+solve(1,n-1)+solve(2,n-1);
	printf("%lld",res);
}
