#include <iostream>
using namespace std;
int main()
{
	int t_cases; 
	cin>>t_cases;
	int i;
	for(i=0;i<t_cases;i++)
	{
		int x,y;
		cin>>x>>y;
		int number;
		if(x==y)
		{
			if(x%2==0)
			{
				number=x+y;
				cout<<number;
			}
			else
			{
				number=x+y-1;
				cout<<number;
			}
		}
		else if((x-y)==2)
		{
			if(x%2==0)
			{
				number=x+y;
				cout<<number;
			}
			else
			{
				number=x+y-1;
				cout<<number;
			}
			
			
		}
		else
		{
			cout<<"No Number";
		}
		cout<<"\n";
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
}
