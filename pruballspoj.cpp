#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[1050][1050];
ll egg_drop(ll eggs,ll floor)
{
	if(dp[eggs][floor]!=-1)
	return dp[eggs][floor];
	if(floor==0||floor==1)
	return dp[eggs][floor]=floor;
	if(eggs==1)
	return dp[eggs][floor]=floor;
	ll res;
	dp[eggs][floor]=1000000000;
	for(int x=1;x<=floor;x++)
	{
		res=1+max(egg_drop(eggs-1,x-1),egg_drop(eggs,floor-x));
		if(res<dp[eggs][floor])
		dp[eggs][floor]=res;
	}
}
int main()
{
	ll t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		ll s_no,eggs,floors;
		scanf("%lld%lld%lld",&s_no,&eggs,&floors);
		memset(dp,-1,sizeof(dp));
		ll res=egg_drop(eggs,floors);
		printf("%lld %lld\n",s_no,dp[eggs][floors]);
	}
}
