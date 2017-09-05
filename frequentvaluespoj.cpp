#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
typedef long long int ll;
int main()
{
	while(1)
	{
		ll i,n,q,a,b,j,x;
		scanf("%lld",&n);
		if(n==0)
		break;
		scanf("%lld",&q);
		vector <ll> val;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&x);
			val.push_back(x);
		}
		val.push_back(10000000);
		vector < pair<ll,ll> > freq(n);
		ll k=0;
		ll temp=0;
		for(i=0;i<n;i++)
		{
			freq[k].first=val[i];
			freq[k].second=1;
			while(val[i]==val[i+1]&&i<=n-1)
			{
				freq[k].second++;
				i++;
			}
			k++;
		}
		map <ll,ll> m;
		for(i=0;i<k;i++)
		{
			m[freq[i].first]=i;
		}
		for(i=0;i<q;i++)
		{
			scanf("%lld%lld",&a,&b);
			ll max=-1;
			
			for(j=a-1;j<=b-1;j++)
			{
				if(freq[m[val[j]]].second>max)
				{
					max=freq[m[val[j]]].second;
				}
			}
			cout<<max<<endl;
			
		}
		val.clear();
		m.clear();
		freq.clear();
		
		
	}
}
