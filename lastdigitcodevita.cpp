#include<iostream>
using namespace std;
long long int pow(int base,long long int i);
int main()
{
	long long int n;
	cin>>n;
	long long int j,s=0,k=0,d;
	
	for(j=0;j<=n;j++)
	{
		s+=pow(4,j);
	}
	int i=0;
	while(pow(2,i)<=n)
	{
		k+=pow(2,pow(2,i));
		i++;
		
		
	}
	d=s*k;
	cout<<d%10;
	
	
	
	
	
	
	
	
	
	
	
	
	
}
long long int pow(int base,long long int i)
{
	long long int t,s;
	
	for(t=0;t<i;t++)
	{
	s*=base	;
	}
	return s;
	
	
	
}

