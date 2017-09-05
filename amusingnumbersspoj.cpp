#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
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
		ll temp=n;
		ll count=0;
		ll i=1;
		while(temp>0)
		{
			temp=temp-pow(2,i++);
			count++;
		}
		ll difference=n-(pow(2,count)-1);
		vector <ll> s;
		while(difference>0)
		{
			temp=difference%2;
			difference=difference/2;
			s.insert(s.begin(),temp);
		}
		if(s.size()<count)
		{
			ll diff=count-s.size();
			while(diff--)
			s.insert(s.begin(),0);		
		}
		for(i=0;i<s.size();i++)
		{
			if(s[i]==0)
			printf("5");
			else
			printf("6");
		}
		printf("\n");
		
		
	}
}
