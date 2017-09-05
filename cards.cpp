#include <iostream>
using namespace std;
int main()
{
	int t_cases;
	cin>>t_cases;
	int i;
	for(i=0;i<t_cases;i++)
	{
		long long int n;
		cin>>n;
		long long int cards=2+5*(n-1)+3*(n-1)*(n-2)/2;
		cout<<cards%1000007;
		cout<<"\n";
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
}
