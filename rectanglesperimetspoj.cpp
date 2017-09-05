#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int ll;
ll large(ll a ,ll b)
{
	if(a>=b)
	return a;
	else
	return b;
}
ll small(ll a,ll b)
{
	if(a<=b)
	return a;
	else
	return b;
}
int main()
{
	ll n,i,x,y;
	scanf("%lld",&n);
	ll a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld%lld",&a[i],&b[i]);
	}
	ll sum=0;
	ll dp[n][2];
	ll sum1=0;
	ll sum2=0;
	dp[0][0]=a[0];
	dp[0][1]=b[0];
	for(i=1;i<n;i++)
	{
		dp[i][0]=a[i]+large(dp[i-1][0]+abs(b[i]-b[i-1]),dp[i-1][1]+abs(b[i]-a[i-1]));
		dp[i][1]=b[i]+large(dp[i-1][0]+abs(a[i]-b[i-1]),dp[i-1][1]+abs(a[i]-a[i-1]));
	}
	sum=large(dp[n-1][0],dp[n-1][1]);
	
//	for(i=0;i<n;i+=2)
//	{
//		sum+=large(rect[i].first,rect[i].second);
//	}
//	for(i=1;i<n;i+=2)
//	{
//		sum+=small(rect[i].first,rect[i].second);
//		
//		
//	}
//	if(n&1)
//	{
//		for(i=1;i<n;i+=2)
//		{
//			sum=sum+abs(large(rect[i].first,rect[i].second)-small(rect[i-1].first,rect[i-1].second))+abs(large(rect[i].first,rect[i].second)-small(rect[i+1].first,rect[i+1].second));
//		}
//	}
//	else
//	{
//		for(i=1;i<n;i+=2)
//		{
//			if(i!=n-1)
//			sum=sum+abs(large(rect[i].first,rect[i].second)-small(rect[i-1].first,rect[i-1].second))+abs(large(rect[i].first,rect[i].second)-small(rect[i+1].first,rect[i+1].second));
//			else
//			sum+=abs(large(rect[i].first,rect[i].second)-small(rect[i-1].first,rect[i-1].second));
//		}
//	}
	printf("%lld",sum);

}
