#include <stdio.h>
int main()
{
	int t_cases;
	scanf("%d",&t_cases);
	int i;
	for(i=0;i<t_cases;i++)
	{
		long long int third,third_last,sum;
		scanf("%lld%lld%lld",&third,&third_last,&sum);
		long long N,diff,first_term,k,last_term;
		N=2*sum/(third+third_last);
		printf("%lld",N);
		printf("\n");
		diff=(third_last-third)/(N-5);
		first_term=third-2*diff;
		last_term=first_term+(N-1)*diff;
		long long int count=0;
		for(k=first_term;k<=last_term;k+=diff)
		{
			printf("%lld",k);
			printf(" ");
			count++;
			if(count==N)
			break;
		}
		printf("\n");
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
}
