#include <bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
	if(b==0)
	return a;
	else
	{
		return gcd(b,a%b);
	}	
}
int main()
{
	int t_cases;
	scanf("%d",&t_cases);
	while(t_cases--)
	{
		long long int a,b;
		scanf("%lld%lld",&a,&b);
		long long int N=gcd(a,b);
		long long int i,ans=0;
		long long int sqt=(int)sqrt(N);
		for(i=1;i<=sqt;i++)
		{
			if(N%i==0)
			{
				ans+=2;
				if(i==N/i)
				ans--;
			}
		}
		printf("%lld\n",ans);
		
		
		
	}
	
	
}
