#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll dp[1000][1000];
ll minimum(ll a,ll b)
{
	if(a<=b)
	return a;
	else 
	return b;
}
ll minimum_3(ll a,ll b,ll c)
{
	ll min=a;
	if(b<=min)
	min=b;
	if(c<=min)
	min=c;
	return min;
}
int main()
{
	ll n,m,i,j;
	scanf("%lld%lld",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%lld",&dp[i][j]);
		}
	}
	for(i=n-2;i>=0;i--)
	{
		for(j=0;j<m;j++)
		{
			if(j==0)
			{
				dp[i][j]+=minimum(dp[i+1][j],dp[i+1][j+1]);
			}
			else if(j==m-1)
			{
				dp[i][j]+=minimum(dp[i+1][j],dp[i+1][j-1]);
			}
			else
			{
				dp[i][j]+=minimum_3(dp[i+1][j],dp[i+1][j+1],dp[i+1][j-1]);
			}
			
		}
	}
	ll min=1000000000;
	for(i=0;i<m;i++)
	{
		if(dp[0][i]<=min)
		min=dp[0][i];
	}
	printf("%lld\n",min);
}
