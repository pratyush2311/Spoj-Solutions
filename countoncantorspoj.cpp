#include <iostream>
using namespace std;
int main()
{
	int t_cases;
	cin>>t_cases;
	int i;
	for(i=1;i<=t_cases;i++)
	{
		long value;
		cin>>value;
	
		long k=1;
		int i=1;
		int j=1;
		while(k<value)
		{
			j++;
			k++;
			if(k==value)
			break;
			while(j>1&&k<value)
			{
				i++;
				j--;
				k++;
			}
			if(k==value)
				break;
			i++;
			k++;
			if(k==value)
			break;
			while(i>1&&k<value)
			{
				i--;
				j++;
				k++;
			}	
		}
		cout<<"TERM "<<value<<" IS "<<i<<"/"<<j;
		cout<<"\n";
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
}
