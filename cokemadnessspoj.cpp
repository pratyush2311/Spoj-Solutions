#include <iostream>
using namespace std;
int main()
{
	int t_cases,i;
	cin>>t_cases;
	for(i=1;i<=t_cases;i++)
	{
		long long int n,j,need;
		cin>>n;
		long long int power[n],sum=0;
		need=0;
		for(j=0;j<n;j++)
		{
			cin>>power[j];
			
		}
		for(j=0;j<n;j++)
		{
			sum+=power[j];
			if(sum<0)
			{
				need+=(-1)*sum;
				sum=0;
			}
		}
		if(need==0)
		cout<<"Scenario #"<<i<<": "<<1<<"\n";
		else
		cout<<"Scenario #"<<i<<": "<<need+1<<"\n";
	}
}
