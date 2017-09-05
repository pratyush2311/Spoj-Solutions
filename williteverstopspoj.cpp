#include <iostream>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	while(n>1)
	{
		if(n%2==0)
		n=n/2;
		else
		{
		cout<<"NIE";
		return 0;
		}
	}
	cout<<"TAK";
		
		
	
	
	
	
	
}
