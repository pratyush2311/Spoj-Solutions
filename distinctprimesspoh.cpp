#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <ll> lucky;
void sieve(ll n)
{
	ll arr[3001];
	memset(arr,0,sizeof(arr));
	int i,j;
	for(i=2;i<n;i++)
	{
		if(arr[i]==0)
		{
			arr[i]=1;
			for(j=i*2;j<n;j+=i)
			{
				arr[j]-=1;
				if((arr[j]+3)==0)
				lucky.push_back(j);
			}
		}
	}
	sort(lucky.begin(),lucky.end());
}
int main()
{
	sieve(3000);

	ll t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		ll a;
		scanf("%lld",&a);
		ll result=lucky[a-1];
		printf("%lld\n",result);
		
	}
	
	
}
