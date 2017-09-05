#include <iostream>
using namespace std;
int main()
{
	int t_cases;
	scanf("%d",&t_cases);
	
	while(t_cases--)
	{
		int flag=0;
		long long int n,i,j;
		scanf("%lld",&n);
		long long int array[n];
		for(int i=0;i<n;i++)
		scanf("%lld",&array[i]);
		for (int i = 0; i < n; i++) 
		{

  // look to the left in the array if the number was used before
  			int found = 0;
 			for (int j = 0; j < i; j++) 
			{
    			if (array[i] == array[j]) 
				found++;
  			}

  // go on if it's the first occurance
  			if (found == 0) 
			{
			int count = 1;

    // look to the right in the array for other occurances
    		for (int j = i + 1; j < n; j++) 
			{
      		if (array[i] == array[j]) 
			count++;
    		}
    		if(count>(n/2))
    		{
				printf("YES ");
				printf("%lld",array[i]);
				printf("\n");
				flag=1;
				break;

   			}
}
	
}
			if(flag==0)
			{
			printf("NO");
			printf("\n");
		}
}
}
