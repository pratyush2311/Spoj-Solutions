#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int dp[1010][1010];
vector <ll> res;
vector <ll> girl,tom;
ll maximum(ll a,ll b)
{
	if(a>=b)
	return a;
	else
	return b;
	
}
void lcs()
{
	memset(dp,0,sizeof(dp));
	ll i,j;
	for(i=1;i<=tom.size();i++)
	{
		for(j=1;j<=girl.size();j++)
		{
			if(tom[i-1]==girl[j-1])
			dp[i][j]=dp[i-1][j-1]+1;
			else
			dp[i][j]=maximum(dp[i-1][j],dp[i][j-1]);
		}
	}
	res.push_back(dp[tom.size()][girl.size()]);	
}
ll result()
{
	ll i;
	ll max=-1;
	for(i=0;i<res.size();i++)
	{
		if(res[i]>max)
		max=res[i];
	}
	return max;
	
}
int main()
{
	ll t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		
		girl.clear();
		tom.clear();
		ll x=1;
		while(1)
		{
			scanf("%lld",&x);
			if(x==0)
			break;
			girl.push_back(x);
		}
		int flag=0;
		tom.push_back(0);
		while(1)
		{
			
			scanf("%lld",&x);
			if(x==0)
			{
				lcs();
				tom.clear();
				scanf("%lld",&x);
				if(x==0)
				{
					flag=1;
					break;
				}
			}
			
			tom.push_back(x);
			
		}
		if(flag==1)
		{
			ll temp=result();
			printf("%lld\n",temp);
			res.clear();
			continue;
		}

		
		
	}
	
	
	
	
	
}
