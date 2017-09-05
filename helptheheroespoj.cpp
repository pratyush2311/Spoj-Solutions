#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define sc(a) scanf("%lld",&a);
int main()
{
	ll t_cases;
	sc(t_cases);
	while(t_cases--)
	{
		ll i,e,l,x,temp,j,temp2;
		sc(e);
		sc(l);
		vector <ll> energy,time,ans;
		energy.clear();
		time.clear();
		ans.clear();
		for(i=0;i<=e;i++)
		ans.push_back(0);
		for(i=0;i<l;i++)
		{
			sc(x);
			energy.push_back(x);
		}
		for(i=0;i<l;i++)
		{
			sc(x);
			time.push_back(x);
		}
		for(i=1;i<=e;i++)
		{
			temp=ans[i-1];
			for(j=0;j<l;j++)
			{
				if(i>=energy[j])
				{
					temp2=time[j]+ans[i-energy[j]];
					temp=max(temp,temp2);
				}
				
			}
			ans[i]=temp;
			
			
		}
		printf("%lld\n",ans[e]);
		
	}
}
