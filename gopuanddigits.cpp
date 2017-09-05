#include <iostream>
using namespace std;
typedef long long int ll;
ll sum(ll n)
{
	ll a;
	ll temp=n;
	ll s=0;
	while(temp>0)
	{
		a=temp%10;
		temp=temp/10;
		s+=a;
	}
	return s;
}
int main()
{
	ll t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		ll n,i,temp,res;
		scanf("%lld",&n);
		for(i=n;1;i++)
		{
			temp=sum(i);
			if(i%temp==0)
			{
				res=i;
				break;
			}
		}
		printf("%lld\n",res);
	}
}
