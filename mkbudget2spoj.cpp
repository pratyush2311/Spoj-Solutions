#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define sc(a) scanf("%lld",&a);
#define pr(a) printf("%lld",a);
ll min3(ll a,ll b,ll c)
{
	ll min=a;
	if(b<min)
	min=b;
	if(c<min)
	min=c;
	return min;
}
int main()
{
	int k=1;
	while(1)
	{
		ll i,j,months,costs,salary,s_pay;
		sc(months);
		if(months==0)
		break;
		sc(costs);
		sc(salary);
		sc(s_pay);
		ll emps[months];
		for(i=0;i<months;i++)
		sc(emps[i]);
		ll dp[months+1][32];
		for(i=1;i<=31;i++)
		{
			dp[1][i]=i*(costs+salary);
		}
		for(i=1;i<=months;i++)
		{
			for(j=1;j<=30;j++)
			{
				if(i==1)
				dp[i][j]=min(dp[i-1][j+1]+s_pay+(j)*salary,dp[i-1][j+1]+(j+1)*salary);
				else
				dp[i][j]=min3(dp[i-1][j-1]+costs+j*salary,dp[i-1][j+1]+s_pay+(j)*salary,dp[i-1][j+1]+(j+1)*salary);
			}
		}
		printf("Case %d, cost = $%lld\n",k,dp[months][emps[months-1]]);
		k++;
		
	}
	
}
