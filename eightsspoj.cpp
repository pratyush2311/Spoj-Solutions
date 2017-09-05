#include <iostream>
using namespace std;
int main()
{
	int t_cases;
	cin>>t_cases;
	int i;
	for(i=0;i<t_cases;i++)
	{
		long long int choice;
		cin>>choice;
		long long int nth_term;
		if(choice%2==1)
		{
		nth_term=1+(choice/2)*5;
		cout<<nth_term<<92;	
		}
		else
		{
			nth_term=4+((choice/2)-1)*5;
			cout<<nth_term<<42;
			
		}
		cout<<"\n";
		
		
		
		
	}
	
	
	
	
	
	
}
