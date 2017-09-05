#include <iostream>
#include <string.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		char s[100];
		scanf("%s",s);
		ll i,sum=0;
		ll n=strlen(s);
		for(i=0;i<n;i++)
		{
			ll temp=s[i]-'0';
			sum+=temp;
		}
		printf("%lld\n",sum);
	}
}
