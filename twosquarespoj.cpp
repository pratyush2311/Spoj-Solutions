#include <iostream>
#include <math.h>
using namespace std;
long long int checkprime(long long int num)
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
		int n,i,j;
		j=0;
		long long int num;
		cin>>num;
		long long int primes[num];
		for(n=2;n<=num/2;n++)
		{
			if(checkprime(n)&&num%n==0)
			{
				primes[j]=n;
				j++;
			}
		}
		long long int temp;
		int flag=0;
		for(i=0;i<j;i++)
		{
			int count=0;
			
			for(j=1;;j++)
			{
				long long int d=pow(primes[i],j);
				if(num%d==0)
				count++;
				else 
				break;
			}
			if(count%2==0)
			{
				flag=1;
				break;
			}
		
			
		}
		if(flag==1)
		cout<<"Yes"<<"\n";
		else
		cout<<"No"<<"\n";
		
	
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
}
