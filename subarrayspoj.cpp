#include <iostream>
using namespace std;
typedef long long int ll;
ll findmax(ll arr[],ll i,ll k)
{
	ll j;
	ll max=-1;
	for(j=i;j<i+k;j++)
	{
		if(arr[j]>=max)
		max=arr[j];
	}
	return max;
	
}
int main()
{
	ll n,i,k;
	scanf("%lld",&n);
	ll arr[n];
	for(i=0;i<n;i++)
	scanf("%lld",&arr[i]);
	scanf("%lld",&k);
	for(i=0;i<=n-k;i++)
	{
		ll max=findmax(arr,i,k);
		printf("%lld ",max);
		
	}
	
	
}
