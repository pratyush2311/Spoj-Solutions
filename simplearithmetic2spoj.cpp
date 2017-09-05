#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{

	int t_cases;
	cin>>t_cases;
	while(t_cases--)
	{
		long long int num1,num2,value;
		char c;
		cin>>num1>>c>>num2;
		value=num1;
		while(c!='=')
		{
			
				
			if(c=='+')
			{
				value+=num2;
			}
			if(c=='-')
			{
				value-=num2;
			}
			if(c=='*')
			{
			
				value*=num2;
			}
			if(c=='/')
			{	
				value/=num2;
			}
			 
			cin>>c;
			if(c=='=')
			break; 
			cin>>num2;
		}
		cout<<value<<"\n";	
		}
		
		
	
		
		
		
		
	}


