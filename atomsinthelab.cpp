#include <iostream>
using namespace std;
int main()
{
	int p;
	scanf("%d",&p);
	while(p--)
	{
		double n,k,m;
		scanf("%lf%lf%lf",&n,&k,&m);
		double temp=n;
		long long int time=0;
		while(temp<m)
		{
			temp=temp*k;
			time++;
		}
		if (temp>m)
		{
			time--;
			if(time<0)
			time=0;
			printf("%lld\n",time);
		}
		else
		{
			printf("%lld\n",time);
		}
	}
}
