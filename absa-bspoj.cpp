#include <iostream>
using namespace std;
int main()
{
	int t_cases;
	cin>>t_cases;
	while(t_cases--)
	{
		int n,i;
		cin>>n;
		long long int num[n];
		long long int sum=0;
		for(i=1;i<=n;i++)
		{
			cin>>num[i];
		}
		for(i=n;i>=1;i--)
		{
			sum+=((i-1)-(n-i))*num[i];
			
		}
		cout<<sum<<"\n";
	}
}
