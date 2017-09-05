#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
	return a.second<b.second;
}
int main()
{
	ll t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		ll i,n,x,y;
		scanf("%lld",&n);
		vector < pair<ll,ll> > v,v2;
		for(i=0;i<n;i++)
		{
			scanf("%lld%lld",&x,&y);
			v.push_back(make_pair(x,y));
		}
		sort(v.begin(),v.end(),sortbysec);
		v2.push_back(v[0]);
		ll k=0;
		for(i=1;i<n;i++)
		{
			if(v[i].first>=v2[k].second)
			{
				v2.push_back(v[i]);
				k++;
			}
		}
		ll size=v2.size();
		printf("%lld\n",size);
		v.clear();
		v2.clear();
	}
}
