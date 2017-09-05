#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int i=1;
	int t_cases;
	scanf("%d",&t_cases);
	while(t_cases--)
	{
		double dis,speed;
		scanf("%lf%lf",&dis,&speed);
		double res=dis*9.806;
		res=res/(speed*speed);
		res=asin(res);
		res=res/2.0;
		res=res*180;
		res=res/(2*acos(0.0));
		if(res>=0&&res<=45)
		cout<<fixed<<setprecision(2)<<"Scenario #"<<i<<": "<<res<<endl;
		else
		printf("Scenario #%d: -1\n",i);
		i++;
	}
}
