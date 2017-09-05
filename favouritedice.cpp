#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	int t_cases;
	cin>>t_cases;
	while(t_cases--)
	{
		int n,i;
		cin>>n;
		double s=0;
		for(i=1;i<=n;i++)
		{
		s+=1.0/i;
		}
		double y=n*s;
		cout<<fixed<<setprecision(2)<<y<<"\n";
		
		
	}
	
	
}
