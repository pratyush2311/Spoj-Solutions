#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool check(vector <ll> &p,vector <ll> &m,ll cost,ll val)
{
	ll i,total=0;
	for(i=0;i<p.size();i++)
	{
		ll diff=val-p[i];
		if(diff>0)
		{
			total+=diff*m[i];
			if(total>cost)
			return false;
		}
	}
	return true;
}
int main()
{
	ll t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		ll i,n,total_cost,x,mid,low,high,ans=-1;
		scanf("%lld%lld",&n,&total_cost);
		vector <ll>  p,m;
		p.clear();
		m.clear();
		for(i=0;i<n;i++)
		{
			scanf("%lld",&x);
			p.push_back(x);
			scanf("%lld",&x);
			m.push_back(x);
		}
		low=0;
		high=LLONG_MAX/10;
		while(low<high)
		{
			mid=(low+high)/2;
			if(check(p,m,total_cost,mid))
			{
				low=mid+1;
				ans=max(ans,mid);
			}
			else
			high=mid;
		}
		printf("%lld\n",ans);
		
		
	}
}
