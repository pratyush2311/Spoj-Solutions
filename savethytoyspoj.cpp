#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll values[100010];
ll dp[100010];
int main()
{
	ll t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		ll n,i;
		scanf("%lld",&n);
		memset(values,0,sizeof(values));
		for(i=0;i<n;i++)
		scanf("%lld",&values[i]);
		memset(dp,0,sizeof(dp));
		for(i=n-1;i>=0;i--)
		dp[i]=max(values[i]+dp[i+2],max(values[i]+values[i+1]+dp[i+4],values[i]+values[i+1]+values[i+2]+dp[i+6]));
		printf("%lld\n",dp[0]);
		
	}
}
