#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a,ll b)
{
	if(b==0)
	return a;
	return gcd(b,a%b);
}
ll pour(ll fromcap,ll tocap,ll d)
{
	ll from=fromcap;
	ll to=0;
	ll step=1;
	while(from!=d&&to!=d)
	{
		ll temp=min(from,tocap-to);
		to+=temp;
		from-=temp;
		step++;
		if(from==d||to==d)
		break;
		if(from==0)
		{
			from=fromcap;
			step++;
			
		}
		if(to==tocap)
		{
			to=0;
			step++;
		}
	}
	return step;
	
}
ll steps(ll m,ll n,ll d)
{
	if(m>n)
	swap(m,n);
	if(d>n)
	return -1;
	if((d%gcd(n,m))!=0)
	return -1;
	return min(pour(n,m,d),pour(m,n,d));
}
int main()
{
	
	ll t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		ll m , n , d;
		scanf("%lld%lld%lld",&m,&n,&d);
		ll res=steps(m,n,d);
		printf("%lld\n",res);
		
	}
}
	
 
