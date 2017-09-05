#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
long long int dp[1000000];

int main()
{
	memset(dp,0,sizeof(dp));
	vector <char> str;
	//0 for loss 1 for win;
	ll k,l,m,i,x;
	scanf("%lld%lld%lld",&k,&l,&m);
	vector <ll> coins;
	ll max=-1;
	
	for(i=0;i<m;i++)
	{
		scanf("%lld",&x);
		if(x>=max)
		max=x;
		coins.push_back(x);
	}
	dp[0]=0;
	dp[1]=1;
	dp[k]=1;
	dp[l]=1;
	for(i=2;i<=max;i++)
	{
		if(i==k||i==l)
		continue;
		if(dp[i-1]==1&&dp[i-k>=0?i-k:i-1]==1&&dp[i-l>=0?i-l:i-1]==1)
		dp[i]=0;
		else
		dp[i]=1;
	}
	for(i=0;i<m;i++)
	{

		if(dp[coins[i]]==0)
		str.push_back('B');
		else
		str.push_back('A');
	}
	for(i=0;i<m;i++)
	{
		cout<<str[i];
	}
	str.clear();
	
	
}
