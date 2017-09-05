#include <iostream>
using namespace std;
int main()
{
	int t_cases;
	scanf("%d",&t_cases);
	while(t_cases--)
	{
		long long int a,b,c;
		scanf("%lld%lld%lld",&a,&b,&c);
		long long int res=a*a-2*b;
		printf("%lld\n",res);
	}
}
