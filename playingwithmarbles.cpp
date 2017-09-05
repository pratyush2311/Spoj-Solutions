#include <iostream>
using namespace std;
int main()
{
	while(1)
	{
		int n;
		cin>>n;
		if(n==0)
		break;
		long long int sum=5+7*(n-1)+3*(n-1)*(n-2)/2;
		cout<<sum<<"\n";
		
	}
}
