#include <iostream>
#include <math.h>
using namespace std;
int checkprime(int num)
{
	if(num==1)
	return 0;
	int sq_rt=sqrt(num);
	int i;
	for(i=2;i<=sq_rt;i++)
	{
		if(num%i==0)
		return 0;
	}
	return 1;
	
	
}
int main()
{
	int t_cases;
	cin>>t_cases;
	while(t_cases--)
	{
		int l,u,i;
		cin>>l>>u;
		for(i=l;i<=u;i++)
		{
			if(checkprime(i))
			cout<<i<<"\n";
			
		}
	}
	
	
	
}
