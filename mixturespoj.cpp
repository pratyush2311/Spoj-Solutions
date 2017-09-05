#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[1000][1000];
ll sum(ll arr[],ll a,ll b)
{
	ll res=0;
	for(ll i=a;i<=b;i++)
	{
		res=(res+arr[i])%100;
	}
	return res;
}
ll calc(ll arr[],ll a,ll b)
{
	if(dp[a][b]!=-1)
	return dp[a][b];
	else if(a==b)
	{
		dp[a][b]=0;
		return 0;
	}
	else
	{
		
		
		ll temp;
		for(ll k=a;k<b;k++)
		{
			temp=calc(arr,a,k)+calc(arr,k+1,b)+sum(arr,a,k)*sum(arr,k+1,b);
			if(dp[a][b]==-1||temp<dp[a][b])
			dp[a][b]=temp;
			
		}
		return dp[a][b];
	}
	
	

}

int main()
{
	
	ll n,i;
	while(scanf("%lld",&n)!=EOF)
	{
		memset(dp,-1,sizeof(dp));
	
		ll arr[1000];
		for(i=0;i<n;i++)
		cin>>arr[i];
		printf("%lld\n",calc(arr,0,n-1));
		
	}
}

