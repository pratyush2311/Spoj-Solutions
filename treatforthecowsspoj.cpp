#include <iostream>
using namespace std;
typedef long long int ll;
ll arr[2500];
ll dp[2500][2500];
ll maximum(ll a,ll b)
{
	if(a>=b)
	return a;
	else
	return b;
}
ll profit(ll day,ll left,ll right)
{
	if(left>right)
	return 0;
	if(dp[left][right]!=-1)
	return dp[left][right];
	else
	return dp[left][right]=maximum(profit(day+1,left+1,right)+day*arr[left],profit(day+1,left,right-1)+day*arr[right]);
}
int main()
{
	ll n,i,j;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=0;i<=n+1;i++)
	for(j=0;j<=n+1;j++)
	dp[i][j]=-1;
	cout<<profit(1,0,n-1);	


}
