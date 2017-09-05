#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool check(vector <ll> &v,ll cost,ll val)
{
	ll i,total=0;
	for(i=0;i<v.size();i++)
	{
		if(v[i]>val)
		{
			total+=v[i]-val;
			if(total>=cost)
			return true;
		}
	}
	return false;
}
int main()
{
	ll i,n,val,x,lo,mid,high;
	scanf("%lld%lld",&n,&val);
	vector <ll> v;
	v.clear();
	for(i=0;i<n;i++)
	{
		scanf("%lld",&x);
		v.push_back(x);
	}
	lo=0;
	high=LLONG_MAX/10;
	ll ans=-1;
	while(lo<high)
	{
		mid=(lo+high)/2;
		if(check(v,val,mid))
		{
			lo=mid+1;
			ans=max(ans,mid);
		}
		else
		high=mid;
	}
	printf("%lld",ans);
	
}
