#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t_cases;
	scanf("%d",&t_cases);
	while(t_cases--)
	{
		int n,i,towers,D,k;
		scanf("%d%d%d",&n,&towers,&D);
		int strength[n];
		int count=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&strength[i]);	
		}
		
		sort(strength,strength+n);
		for(i=0;i<towers;i++)
		{
			for(k=n-1;k>=0;k--)
			{
				if(strength[k]-D>0)
				{
					strength[k]=strength[k]-D;
					break;
				}
			}
			if(k<0)
			break;
		}
		if(i==towers)
		printf("YES");
		else
		printf("NO");
		printf("\n");
		
	}
	
	
	
	
	
}
