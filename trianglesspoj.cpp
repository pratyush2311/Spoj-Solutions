#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int t_cases,i;
	cin>>t_cases;
	for(i=0;i<t_cases;i++)
	{
		long long int n;
		cin>>n;
		unsigned long long int tri;
		if(n%2==0)
		tri=n*(n+2)*(2*n+1)/8;
		else
		tri=((n*(n+2)*(2*n+1))-1)/8;
		cout<<tri;
		cout<<"\n";
		
		
		
		
	}
	
	
}
