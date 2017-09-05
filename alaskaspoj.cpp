#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	while(1)
	{
		int n;
		cin>>n;
		if(n==0)
		break;
		int miles[n],i,j;
		for(i=0;i<n;i++)
		{
			cin>>miles[i];
			
		}
		sort(miles,miles+n);
		int each_mile[1423];
		for(i=0;i<1423;i++)
		{
			each_mile[i]=0;
			
		}
		for(i=0;i<1423;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i==miles[j])
				each_mile[i]=1;
			}
		}
		int petrol=0;
		int flag=0;
		for(i=0;i<1423;i++)
		{
		
			if(each_mile[i]==1)
			{
			for(j=1;j<=200;j++)
				{
					if(petrol==200)
					break;
					petrol++;
					
				}
			}
			else 
			{
				petrol--;
			}
			if(petrol<0)
			{
				flag=1;
				break;
			}
			
			
		}
		if(flag==1)
		{
			cout<<"IMPOSSIBLE"<<"\n";
			continue;
		}
		for(i=1422;i>=0;i--)
		{
			if(petrol<0)
			{
				flag=1;
				break;
			}
			if(each_mile[i]==1)
			{
		
				for(j=1;j<=200;j++)
				{
					if(petrol==200)
					break;
					petrol++;
				
				}
			
			}
			else
			{
				petrol--;
				
			}
			
			
		}
		if(flag==1)
		{
			cout<<"IMPOSSIBLE"<<"\n";
			continue;
		}
		else
		cout<<"POSSIBLE"<<"\n";
	}
}

