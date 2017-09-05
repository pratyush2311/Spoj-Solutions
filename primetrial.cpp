#include <iostream>
using namespace std;
int main()
{
	cout<<"enter a number";
	int n;
	cin>>n;
	int p;
	int arr[n];
	for(int j=0;j<n;j++)
	arr[j]=1;
	for(p=2;p*p<n;p++)
	{
		for(int i=p*2;i<n;i+=p )
		arr[i]=0;
		
		
	}
	for(int k=2;k<n;k++)
	if(arr[k]==1)
	cout<<k<<"\n";
	
	
	
	
	
}
