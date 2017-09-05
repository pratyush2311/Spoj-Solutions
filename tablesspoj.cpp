#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,k,s,x,i;
	vector <ll> v;
	scanf("%lld%lld%lld",&n,&k,&s);
	while(n--)
	{
		scanf("%lld",&x);
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	ll t=v.size();
	ll screws=k*s;
	ll sum=0;
	ll count=0;
	for(i=t-1;i>=0;i--)
	{
		sum+=v[i];
		count++;
		if(sum>=screws)
		break;
		
	}
	printf("%lld",count);
	
}
