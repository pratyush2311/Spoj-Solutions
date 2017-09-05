
#include <iostream>
using namespace std;
int main()
{
	long long int n,m,i;
	cin>>n>>m;
	long long int cost[n];
	for(i=0;i<n;i++)
	cin>>cost[i];
	long long int l=0;
	
	long long int max_sum=0;
	long long int sum=0;
	for(i=0;i<n;i++)
	{
			sum=sum+cost[i];
			while(sum>m)
			{
				sum=sum-cost[l];
				l++;
				if(max_sum<=sum&&sum<=m)
				{
				max_sum=sum;
				break;
				}
		
			}
		if(max_sum<=sum&&sum<=m)
				{
				max_sum=sum;
		}
	
		
}
cout<<max_sum;
}
