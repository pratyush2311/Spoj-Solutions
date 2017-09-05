#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main()
{
	int t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		vector < pair<ll,ll> > rings;
		ll n,i,r,R;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld%lld",&r,&R);
			rings.push_back(make_pair(r,R));
		}
		ll max_r=-1;
		ll max_i;
		for(i=0;i<n;i++)
		{
			if(rings[i].first>max_r)
			{
				max_r=rings[i].first;
				max_i=i+1;	
			}
			;
		}
	
		int flag=1;
		int temp=max_i-1;
		for(i=0;i<n;i++)
		{
			if(i!=temp)
			{
				if(max_r>rings[i].second)
				flag=1;
				else
				{
					flag=0;
					break;
				}
			}
			
		}
		if(flag==1)
		printf("%lld\n",max_i);
		else
		printf("-1\n");
		rings.clear();
	}
}
