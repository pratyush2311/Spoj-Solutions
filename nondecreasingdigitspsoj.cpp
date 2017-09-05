#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long int ll;
int main()
{
	ll t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		ll s,n,i,count=1;
		scanf("%lld%lld",&s,&n);
		for(i=1;i<=n;i++)
		{
			count*=(10+(i-1));
			count=count/i;
		}
		printf("%lld %lld\n",s,count);
		
	}
}
