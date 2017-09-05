#include <iostream>
using namespace std;
int main()
{
	int arr[200];
	int count=0;
	for(int i=0;i<200;i++)
	{
		cin>>arr[i];
		count++;
		if(arr[i]==0)
		break;
	}
	for(int j=0;j<count-1;j++)
	{
		long int n_of_squares=(arr[j]*(arr[j]+1)*(2*arr[j]+1))/6;
		cout<<n_of_squares;
		cout<<"\n";
	}
	
}
