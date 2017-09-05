#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	while(1)
	{
		long long int n,i;
		cin>>n;
		if(n==0)
		break;
		long long int studs[n];
		for(i=0;i<n;i++)
		cin>>studs[i];
		long long int costs[n];
		for(i=0;i<n;i++)
		cin>>costs[i];
		sort(costs,costs+n);
		sort(studs,studs+n);
		long long int j=0;
		long long int sum=0;
		for(i=n-1;i>=0;i--)
		{
			sum+=studs[i]*costs[j];
			j++;
			
		}
		cout<<sum<<"\n";
	}
}

