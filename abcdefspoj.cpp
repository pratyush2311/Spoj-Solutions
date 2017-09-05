#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,i,x,j,k;
	vector <ll> input,a,b;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&x);
		input.push_back(x);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				x=input[i]*input[j]+input[k];
				a.push_back(x);
				if(input[k]!=0)
				{
					x=(input[i]+input[j])*input[k];
					b.push_back(x);
				}
			}
		}
	}
	x=0;
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	vector<ll> ::iterator lo1,up1,it,lo,up;
 	it=a.begin();
 	while(it!=a.end())
 	{
 	 	up=upper_bound(b.begin(),b.end(),*it);
 	 	lo=lower_bound(b.begin(),b.end(),*it);
  		up1=upper_bound(a.begin(),a.end(),*it);
  		lo1=lower_bound(a.begin(),a.end(),*it);
  		x+=(up1-lo1)*(up-lo);
  		it=up1;
    }	
	printf("%lld\n",x);
	
	
	
	
	
	
	
	
	
}
