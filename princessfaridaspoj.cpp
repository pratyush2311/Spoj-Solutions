#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[100000];
ll coins[1000000];
ll max(ll a ,ll b)
{
	if(a>b)
	return a;
	else
	return b;
}
int main()
{
	int t_cases;
	cin>>t_cases;
	for(int i=1;i<=t_cases;i++)
	{
		memset(dp,0,sizeof(dp));
		int n;
		cin>>n;
		int j;
		for(j=0;j<n;j++)
		cin>>coins[j];
		dp[0]=coins[0];
		dp[1]=max(dp[0],coins[1]);
		for(j=2;j<n;j++)
		{
			dp[j]=max(dp[j-1],coins[j]+dp[j-2]);
		}
		cout<<"Case "<<i<<": "<<dp[n-1]<<endl;
	
		
	}
}
