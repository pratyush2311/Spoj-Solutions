#include <iostream>
using namespace std;
int main()
{
	
	int j=1;
	while(j)
	{
		double length;
		cin>>length;
		if(length==0.00)
		break;
		double i;
		int flag=0;
		double value=0;
		for(i=1;;i++)
		{
			value+=1.0/(i+1);
			if(value>=length)
			{
				
				cout<<i<<" card(s)";
				cout<<"\n";
				break;
			
			}
			
		}
	
	
		
		
		
		
	}
	
	
	
	
	
	
	
}
