#include <iostream>
using namespace std;
long long int fact(int x);     
int main()
{
	long long int n,k,i;
	cin>>n>>k;
	long long int s=0;
	long long int temp=fact(n);
	if(k%2==0)
	{
		
		for(i=0;i<=k;i+=2)
		{
			
			s+=temp/((fact(n-i))*(fact(i)));
		}
		cout<<s;
	}
	else
	{
			for(i=0;i<=k-1;i+=2)
		{
			s+=temp/((fact(n-i))*(fact(i)));
		}
		cout<<s;
		
		
		
		
		
	}
	
	
	
	
	
}
long long int fact(int x)          
{
	long long int i, f=1;
	for(i=2; i<=x; i++)
	{
		f=f*i;
	}
	return f;
}
