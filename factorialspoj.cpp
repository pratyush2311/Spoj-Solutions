#include <iostream>
using namespace std;
int power(int i);
// i is the power to which 5 will be raised
int main()
{
	int test_cases;
	cin>>test_cases;
	int i;
	for(i=0;i<test_cases;i++)
	{
		int num;
		int value=1;
		cin>>num;
		int pow1=1;
		int number_of_zeroes=0;
		while(value>0)
		{
			value=num/((power(pow1++)));
			number_of_zeroes+=value;
			
		}
		cout<<number_of_zeroes;
		cout<<"\n";
		
		
	}
	
	
	
}
int power(int i)
{
	int j;
	int returned_value=1;
	for(j=1;j<=i;j++)
	{
		returned_value=returned_value*5;
		
		
	}
	return returned_value;
	
	
	
	
}
