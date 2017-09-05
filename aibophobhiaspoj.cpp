#include <iostream>
using namespace std;
typedef long long int ll;
ll dp[6200][6200];
ll maximum(ll a,ll b)
{
	if(a>=b)
	return a;
	else
	return b;
}
int main()
{
	int t_cases;
	cin>>t_cases;
	while(t_cases--)
	{
		string s;
		cin>>s;
		string d(s.rbegin(),s.rend());
		ll n=s.length();
		ll i,j;
		for(i=0;i<n;i++)
		{
			dp[i][0]=0;
			dp[0][i]=0;
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(s[j-1]==d[i-1])
				dp[i][j]=dp[i-1][j-1]+1;
				else
				dp[i][j]=maximum(dp[i-1][j],dp[i][j-1]);
			}
		}
		
		ll ans=n-dp[n][n];
		cout<<ans<<endl;
	
	}
	
	
	
	
	
	
}
