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
		n=3*n+3;
		cout<<n<<"\n";
		}
	}
	
	
	
	
	
	
}
