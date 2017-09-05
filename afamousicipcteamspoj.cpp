#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	long long int i=1;
	long long int l1,l2,l3,l4;
	while(scanf("%lld%lld%lld%lld",&l1,&l2,&l3,&l4)!=EOF)
	{
	
		long long int arr[4];
		arr[0]=l1;
		arr[1]=l2;
		arr[2]=l3;
		arr[3]=l4;
		sort(arr,arr+4);
		cout<<"Case "<<i<<": "<<arr[3]+arr[2]<<"\n";
		i++;
		
		
		
	}
}
