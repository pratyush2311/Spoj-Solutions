#include <iostream>
using namespace std;
int main()
{
	int t_cases;
	cin>>t_cases;
	while(t_cases--)
	{
		long long int n,i;
		cin>>n;
		double result=n;
		for(i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				while(n%i==0)
				n=n/i;
				result*=(1-(1.0/(double)i));
			}
			
		}
		if(n>1)
		result*=(1-(1.0/(double)n));
		cout<<result<<"\n";
	
		
		
	}
	
	
	
}

