#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n;
bool b_search(ll arr[],ll low,ll high,ll val)
{
	ll mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==val)
		return true;
		else if(arr[mid]>val)
		high=mid-1;
		else
		low=mid+1;
	}
	return false;
}
int main()
{
	ll t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		ll m,i;
		scanf("%lld%lld",&n,&m);
		ll arr[n];
		for(i=0;i<n;i++)
		scanf("%lld",&arr[i]);
		sort(arr,arr+n);
		ll c=0;
		for(i=0;i<n;i++)
		{
			if(b_search(arr,i+1,n-1,m-arr[i]))
			c++;
		}
		printf("%lld\n",c);
		
	}
}
