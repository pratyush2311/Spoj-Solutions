#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main()
{
	
	while(1)
	{
		ll i,n;
		scanf("%lld",&n);
		if(n==0)
		break;
		ll arr[n];
		for(i=0;i<n;i++)
		scanf("%lld",&arr[i]);
		stack <ll> s;
		ll temp;
		ll max=0;
		i=0;
		while(i<n)
		{
			if(s.empty()||arr[s.top()]<=arr[i])
			s.push(i++);
			else
			{
				temp=s.top();
				s.pop();
				ll temp_area=arr[temp]*(s.empty()?i:i-s.top()-1);
				if(temp_area>=max)
				max=temp_area;
			}
		}
		while(s.empty()==false)
		{
			temp=s.top();
			s.pop();
			ll temp_area=arr[temp]*(s.empty()?i:i-s.top()-1);
			if(temp_area>=max)				
			max=temp_area;
			
		}
		printf("%lld\n",max);
		
		
	}

		
		
		
		
		
}	

