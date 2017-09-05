#include <iostream>
using namespace std;
int main()
{
	int t_cases;
	int i;
	cin>>t_cases;
	for(i=0;i<t_cases;i++)
	{
		long long int n;
		cin>>n;
		long long int x=1;
		long long int s=0;
		long long int arr[n-1];
		long long int g=0;
		for(long long int k=0;k<=n;k++)
		{
			arr[g++]=x;
			x=x*(n-1-k)/(k+1);
			
		}
		for(long long int k=0;k<g;k++)
		{
			cout<<arr[k]<<" ";
			if(arr[k]%2==1)
			s++;
		}
		cout<<"\n";
		cout<<s;
		cout<<"\n";
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
}
