#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
	int t_cases;
	cin>>t_cases;
	while(t_cases--)
	{
		long double a,b,c,d,s,area;
		cin>>a>>b>>c>>d;
		s=(a+b+c+d)/2;
		area=sqrt((s-a)*(s-b)*(s-c)*(s-d));
		cout<<fixed<<setprecision(2)<<area;
		cout<<"\n";
	}
}
