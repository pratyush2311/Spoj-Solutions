#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
	while(1)
	{
		int x[4],xx[4],fin[4],i;
		for(i=0;i<4;i++)
		cin>>x[i];
		for(i=0;i<4;i++)
		cin>>xx[i];
		if(x[0]==-1)
		break;
		int max=-1;
		for(i=0;i<4;i++)
		{
			if(ceil((double)x[i]/xx[i])>max)
			max=ceil((double)x[i]/xx[i]);
		}
		for(i=0;i<4;i++)
		{
			fin[i]=xx[i]*max-x[i];
			
		}
		for(i=0;i<4;i++)
		{
			cout<<fin[i]<<" ";
		}
		cout<<"\n";
		
		
		
		
		
	            	
		
		
	}
	
	
	
	
}
