#include <iostream>
using namespace std;
int main()
{
	int t_cases;
	cin>>t_cases;
	while(t_cases--)
	{
		long long int n,i,s=0,t;
		cin>>n;
		if(n==2||n==1||n==0)
		cout<<0<<"\n";
		else{
			if(n%2==0)
			t=n/2-1;
			else
			t=n/2;
		}
		long long int k=t*t;
		while(k>n)
		{
			k=k%n;
		}
		
	
		cout<<k<<"\n";
	}
}
