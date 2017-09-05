#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll wts[100],vals[100];
ll weight[1050][1050];
ll knapsack(ll max_wt,ll n)
{
	if(n==0||max_wt==0)
	return weight[n][max_wt]=0;
	if(weight[n][max_wt]!=-1)
	return weight[n][max_wt];
	if(wts[n-1]>max_wt)
	return weight[n][max_wt]=knapsack(max_wt,n-1);
	else return weight[n][max_wt]= max(vals[n-1]+knapsack(max_wt-wts[n-1],n-1),knapsack(max_wt,n-1));
	
}

int main()
{
	ll cases;
	scanf("%lld",&cases);
	while(cases--)
	{
		ll max_wt,items,i;
		scanf("%lld%lld",&max_wt,&items);
		for(i=0;i<items;i++)
		{
			scanf("%lld%lld",&wts[i],&vals[i]);
		}
		memset(weight,-1,sizeof(weight));
		ll temp=knapsack(max_wt,items);
		printf("Hey stupid robber, you can get %lld.\n",weight[items][max_wt]);
		
	}
}
