#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		ll n,i,j,k;
		scanf("%lld",&n);
		ll a[n],b[n],temp[n],seq[n];
		vector < pair<ll,ll> > cities;
		cities.clear();
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%lld",&b[i]);
		}
		for(i=0;i<n;i++)
		{
			cities.push_back(make_pair(b[i],a[i]));
		}
		sort(cities.begin(),cities.end());
		for(i=0;i<n;i++)
		{
			temp[i]=cities[i].second;
			seq[i]=1;
		}
		for(i=1;i<n;i++)
		{
			for(j=0;j<i;j++)
			{
				if(temp[i]>=temp[j]&&seq[i]<seq[j]+1)
				seq[i]=seq[j]+1;
			}
		}
		ll max=-1;
		for(i=0;i<n;i++)
		{
			if(seq[i]>max)
			max=seq[i];
		}
		printf("%lld\n",max);
	}

}
