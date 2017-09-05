#include <iostream>
using namespace std;
typedef long long int ll;
ll minimum(ll a,ll b)
{
	if(a<b)
	return a;
	else return b;
}
int main()
{
	ll t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		ll i,j,n,k;
		scanf("%lld%lld",&n,&k);
		ll dp[k+1][k+1];
		ll costs[k+1];
		for(i=1;i<=k;i++)
			scanf("%lld",&costs[i]);
		if(costs[1]==-1)
		{
			for(i=1;i<=k;i++)
			dp[1][i]=-1;
			for(i=1;i<=k;i++)
			dp[i][1]=-1;
		}
		else
		{
			for(i=1;i<=k;i++)
			dp[1][i]=costs[1];
			for(i=2;i<=k;i++)
			dp[i][1]=i*costs[1];
		}
		for(i=2;i<=k;i++)
		{
			for(j=2;j<=k;j++)
			{
				if(i==j)
				{
					if(dp[i][j-1]<0&&costs[j]<0)
					dp[i][j]=-1;
					else if(dp[i][j-1]>0&&costs[j]>0)
					dp[i][j]=minimum(dp[i][j-1],costs[j]);
					else if(costs[j]<0&&dp[i][j-1]>0)
					dp[i][j]=dp[i][j-1];
					else
					dp[i][j]=costs[j];
					
				}
				if(j>i)
				dp[i][j]=dp[i][j-1];
				if(i>j)
				{
					if(dp[i][j-1]<0&&costs[1]<0)
					dp[i][j]=-1;
					else if(dp[i-1][j]<0&&dp[i][j-1]>0)
					dp[i][j]=dp[i][j-1];
					else if(dp[i][j-1]<0&&dp[i-1][j]>0&&costs[1]>0)
					dp[i][j]=dp[i-1][j]+costs[1];
					else
					dp[i][j]=minimum(dp[i-1][j]+costs[1],dp[i][j-1]);
					
				}
			}
		}
		for(i=1;i<=k;i++)
		{
			for(j=1;j<=k;j++)
			cout<<dp[i][j]<<" ";
			cout<<endl;
		}
		
		printf("%lld\n",dp[k][k]);
	}
	
}
