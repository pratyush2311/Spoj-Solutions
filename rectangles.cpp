#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	arr[i]=i+1;
	int count=0;
	int j;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
		int temp=arr[i]*arr[j];
		if(temp<=n)
		count++;
		}
		
		
		
		
	}
	cout<<count;
	
	
}
