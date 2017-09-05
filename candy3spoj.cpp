#include <iostream>
using namespace std;
int main()
{
	long long int t_cases;
	scanf("%lld",&t_cases);
	long long int i,j;
	for(i=0;i<t_cases;i++)
	{
		printf("\n");
		long long int studs,s;
		s=0;
		scanf("%lld",&studs);
		long long int candy[studs];
		for(j=0;j<studs;j++)
		{
			scanf("%lld",&candy[j]);
			s+=candy[j];
			s=s%studs;
			
		}
		
		if(s%studs==0)
		printf("YES");
		else
		printf("NO");
		
		
		
		
		
	}
	
	
	
	
	
	
	
}
