#include <iostream>
using namespace std;
long long int gcd(long long int,long long int);
int main()
{
	int t_cases,i;
	cin>>t_cases;
	for(i=0;i<t_cases;i++)
	{
		long long int a,b,hcf;
		cin>>a>>b;
		if(a>b)
		hcf=gcd(a,b);
		else
		hcf=gcd(b,a);
		a=a/hcf;
		b=b/hcf;
		cout<<b<<" "<<a;
		cout<<"\n";
		
		
		
	}
	
	
	
	
	
	
	
}
long long int gcd(long long int a,long long int b)
{
	long long int r;
	while(b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	return a;
	
	
}
