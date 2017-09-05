#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define sc(a) scanf("%lld",&a);
#define pr(a) printf("%lld",a);
ll minimum(ll a,ll b)
{
	if(a<b)
	return a;
	else 
	return b;
}
int main()
{
	int k=1;
	while(1)
	{
		ll i,months,costs,salary,s_pay;
		sc(months);
		if(months==0)
		break;
		sc(costs);
		sc(salary);
		sc(s_pay);
		ll emps[months];
		for(i=0;i<months;i++)
		sc(emps[i]);
		ll cost[months];
		memset(cost,0,sizeof(cost));
		cost[0]=emps[0]*(costs+salary);
		for(i=1;i<months;i++)
		{
			if(emps[i]<emps[i-1])
			{
				if((cost[i-1]+(emps[i-1]-emps[i])*s_pay+emps[i]*salary)<=(cost[i-1]+salary*emps[i-1]))
				{
					cost[i]=cost[i-1]+(emps[i-1]-emps[i])*s_pay+emps[i]*salary;
				}
				else
				{
					cost[i]=cost[i-1]+salary*emps[i-1];
					emps[i]=emps[i-1];
				}
				
			}
			else
			{
				cost[i]=(emps[i]-emps[i-1])*costs+cost[i-1]+salary*emps[i];
			}
		}
		for(i=0;i<months;i++)
		cout<<cost[i]<<" ";
		printf("Case %d, cost = $%lld\n",k,cost[months-1]);
		k++;
		
	}
}
