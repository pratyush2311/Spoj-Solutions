#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>
long long int count(long long int n);
using namespace std;
int main()
{
	while(1)
	{
		string s;
		cin>>s;
		if(s.compare("00e0")==0)
		break;
		int n1,n2,n3;
		n1=s[0]-'0';
		n2=s[1]-'0';
		n3=s[3]-'0';
		long long int n4=(n1*10+n2)*pow(10,n3);
		long long int digits=count(n4);
		long long int diff=n4-pow(2,digits-1);
		long long int number=1+2*diff;
		cout<<number;
		cout<<"\n";
		
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
}
long long int count(long long int n)
{
	long long int c=0;
	while(n>0)
	{
		n=n/2;
		c++;
		
	}
	return c;
	
	
}
