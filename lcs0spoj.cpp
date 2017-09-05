#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	string a,b;
	cin>>a>>b;
	ll len_a=a.length();
	ll len_b=b.length();
	ll i,j;
	ll dp[len_a+1][len_b+1];
	memset(dp,0,sizeof(dp));
	for(i=1;i<=len_a;i++)
	{
		for(j=1;j<=len_b;j++)
		{
			if(a[i-1]!=b[j-1])
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			else
			dp[i][j]=1+dp[i-1][j-1];
		}
	}
	printf("%lld\n",dp[len_a][len_b]);
	

}
