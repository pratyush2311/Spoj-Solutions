#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int t_cases;
	cin>>t_cases;
	while(t_cases--)
	{
		double r1,r2,r3;
		cin>>r1>>r2>>r3;
		double r4=r1*r2*r3/(r1*r2+r2*r3+r3*r1+2*sqrt((r1*r2*r3)*(r1+r2+r3)));
		cout<<fixed<<setprecision(6)<<r4<<endl;
	}
}
