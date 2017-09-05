#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main()
{
	ll i,n,k,x,j;
	scanf("%lld%lld",&n,&k);
	ll v[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&v[i]);
	}
	sort(v,v+n);
	i=n-1;
	j=n-2;
	ll count=0;
	while(j>=0&&i>=0)
	{
		if(v[i]-v[j]<k)
		{
//			if(j>=1)
			j--;
//			else
//			j=0;
		}
			
		if(v[i]-v[j]==k)
		{
			count++;
//			if(i>=0)
			i--;
//			else
//			i=0;
		}
		if(v[i]-v[j]>k)
		{
//			if(i>=0)
			i--;
//			else
//			i=0;
		
		}
				
	}
	printf("%lld\n",count);
	 
}
