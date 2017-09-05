#include <iostream>
using namespace std;
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
int main()
{
	int t_cases;
	cin>>t_cases;
	int i=1;
	while(t_cases--)
	{
		long long int a,b,c;
		cin>>a>>b>>c;
		if(c%gcd(a,b)==0)
		cout<<"Case "<<i<<": Yes\n";
		else
		cout<<"Case "<<i<<": No\n";
		i++;
	}
}
