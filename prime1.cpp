#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int in=0;in<t;in++)
	{
	
	int lower,upper;
	cin>>lower>>upper;
	int prime[upper],i;
	bool num[upper];
	
	for(i=0;i<upper;i++)
	{
		num[i]=true ;
	}
	for(int j=2;j*j<upper;j++)
	{
		if(num[j]==true)
		{
			for(int i=j*2;i<upper;i+=j)
			{
				num[i]=false;
			}
		}
		
	}
	int q=0;
	int count=0;
	for(int k=2;k<upper;k++)
	{
		if(num[k]==true)
		{
			prime[q++]=k;
			count++;
		
		}
	
	}
		
	
int primefinal[lower-upper+1];
int g=0;
int count2=0;
for(i=0;i<count;i++)
	{
	if(prime[i]>=lower)
	{
		primefinal[g++]=prime[i];
		count2++;
		
	}		
	
	}
	for(i=0;i<count2;i++)
	cout<<primefinal[i]<<"\n";
		

	cout<<"\n";
	
}
}
