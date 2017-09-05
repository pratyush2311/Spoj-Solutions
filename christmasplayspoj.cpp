#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t_cases;
	cin>>t_cases;
	while(t_cases--)
	{
		int n,k,i,g;
		g=0;
		cin>>n>>k;
		long long int height[n];
		for(i=0;i<n;i++)
		cin>>height[i];
		sort(height,height+n);
		if(n==k)
		{
			cout<<(height[n-1]-height[0]);
			cout<<"\n";
		}
		else
		{
			long long int diff[20000];
	
		
			for(i=0;i<=n-k;i++)
				{
					diff[g++]=height[i+k-1]-height[i];
				}
				sort(diff,diff+g);
		
				cout<<diff[0];
				cout<<"\n";
		}
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
}
