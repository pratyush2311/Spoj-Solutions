#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define sc(a) scanf("%lld",&a)
#define pr(a) printf("%lld",a)
ll minimum(ll a ,ll b)
{
	if(a<b)
	return a;
	else 
	return b;
}
ll dp[100010];
int main()
{
	ll t_cases;
	sc(t_cases);
	while(t_cases--)
	{
		ll i,j,w_pig,w_total;
		sc(w_pig);
		sc(w_total);
		ll w_coins=w_total-w_pig;
		for(i=0;i<=w_coins;i++)
		dp[i]=10000000000;
		dp[0]=0;
		ll q;
		sc(q);
		ll val[q],wt[q];
		for(i=0;i<q;i++)
		{
			sc(val[i]);
			sc(wt[i]);
		}
		for(i=0;i<=w_coins;i++)
		{
			for(j=0;j<q;j++)
			{
				if(wt[j]<=i)
				dp[i]=minimum(dp[i],dp[i-wt[j]]+val[j]);
			}
		}
		if(dp[w_coins]!=10000000000)
		printf("The minimum amount of money in the piggy-bank is %lld.\n",dp[w_coins]);
		else
		printf("This is impossible.\n");
				
	}
}
