#include <iostream>
using namespace std;
typedef long long int ll ;
bool dp[1000][100001];
int main()
{
	ll t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		ll n,i,s=0,j;
		scanf("%lld",&n);
		ll arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
			s+=arr[i];
		}
		for(i=0;i<=n;i++)
		dp[i][0]=true;
		for(i=1;i<=s;i++)
		dp[0][i]=false;
		dp[0][arr[0]]=true;
		for(i=1;i<n;i++)
		{
			for(j=1;j<=s;j++)
			{
				if(arr[i]>j)
				dp[i][j]=dp[i-1][j];
				else
				dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i]];
			}
		}
//		for(i=0;i<n;i++)
//		{
//			for(j=0;j<=s;j++)
//			cout<<dp[i][j]<<" ";
//			cout<<endl;
//		}
		ll final=0;
		for(i=0;i<=s;i++)
		{
			for(j=0;j<n;j++)
			{
				if(dp[j][i]==true)
				{
					final+=i;
					break;
				}
			}
		}
		printf("%lld\n",final);
	}
}
