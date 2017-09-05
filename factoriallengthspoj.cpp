#include <iostream>
#include <math.h>
#define pi 3.14159265359
using namespace std;
int main()
{
	int t_cases;
	cin>>t_cases;
	while(t_cases--)
	{
		long long int n;
		cin>>n;
		if(n==0||n==1)
		cout<<"1\n";
		else
		{
			long long int length=((log(2*pi*n))/2+n*(log(n)-log(2.71)))/log(10)+1;
			cout<<length<<"\n";
		}
		
	}
}
