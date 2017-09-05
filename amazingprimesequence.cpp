#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;
ll sprime[10000000];
bool arr[10000000];
ll amazingseq[10000000];
void smallestprime()
{
	ll i,j;
	for(i=2;i<10000000;i+=2)
	sprime[i]=2;
	for(i=3;i<10000000;i+=2)
	{
		if(!arr[i])
		{
			sprime[i]=i;
			for(j=i;j*i<10000000;j+=2)
			{
				if(!arr[j*i])
				{
					arr[j*i]=true;
					sprime[j*i]=i;
				}
			}
		}
		
	}
}
int main()
{
	smallestprime();
	for(ll i=2;i<10000000;i++)
	amazingseq[i]=amazingseq[i-1]+sprime[i];
	ll t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		ll n;
		scanf("%lld",&n);
		ll res=amazingseq[n];
		printf("%lld\n",res);
	}
}
