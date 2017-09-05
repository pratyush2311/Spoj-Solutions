#include <iostream>
#include <math.h>
using namespace std;
bool isprime(long long int n)
{
	long long int i;
	if(n==1)
	return false;
	for(i=2;i*i<n;i++)
	{
		if(n%i==0)
		return false;
	}
	return true;
}
int main()
{
	int t_cases;
	cin>>t_cases;
	while(t_cases--)
	{
		long long int n;
		cin>>n;
		long long int t=floor(n/2);
		if(n==1)
		cout<<0<<"\n";
		else if(n==2)
		cout<<1<<"\n";
		else if(n%4==0)
		cout<<t-1<<"\n";
		else if(n%4==1||n%4==3)
		cout<<t<<"\n";
		else if(n%4==2)
		{
			if(isprime(t)&&n%t!=0)
			cout<<t<<"\n";
			else
			cout<<t-2<<"\n";
		}
	
		
	}

}
