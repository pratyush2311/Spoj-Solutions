#include <iostream>
using namespace std;
long long int sum_of_sqrs(long long int n);
int main()
{
	long long int n;
	cin>>n;

		long long int temp,s;
		
		temp=n;
		int i;
		for(i=1;;i++)
		{
			temp=sum_of_sqrs(temp);
			if(i>5||temp==1)
			break;
		
		}
		if(temp==1)
		cout<<i;
		else
		cout<<-1;
		
		
		
}
long long int sum_of_sqrs(long long int n)
{
	int i;
	long long int s=0;
	while(n>0)
	{
		i=n%10;
		n=n/10;
		s+=i*i;
	}
	return s;
	
}
	
	
	
	
	
	
	

