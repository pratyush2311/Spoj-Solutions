#include <iostream>
using namespace std;
int main()
{
	long long int i;
	for(i=0;;i++)
	{
	long long int number;
	cin>>number;
	if(number==-1)
	break;
	
	long long int k;
	int count=0;
		for(k=1;k<20000;k++)
		{
			long long int temp=1+6*(k-1)+3*(k-1)*(k-2);
			if(number==temp)
			{
				cout<<"Y";
				count=1;
				cout<<"\n";
				break;
			}
			
		}
		if(count==0)
		{
			cout<<"N";
			cout<<"\n";
		}
		
		
		
		
	}
	
	
}
