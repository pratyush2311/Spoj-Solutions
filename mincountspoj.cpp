#include <iostream>
using namespace std;
typedef long long int ll;
int main()
{
	ll t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		ll n;
		scanf("%lld",&n);
		ll res=n*(n+1)/6;
		printf("%lld\n",res);
	}
}
