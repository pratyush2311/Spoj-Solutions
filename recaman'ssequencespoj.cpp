#include <iostream>
using namespace std;
long long int arr[500000];
bool check(long long int a[],int k,long long int temp)
{
	int t;
	for(t=0;t<k;t++)
	{
		if(temp==a[t])
		{
			return true;
			break;
		}
	}
	return false;
}
void pre()
{
	int i;
	long long int temp,temp1;
	arr[0]=0;
	for(i=1;i<500000;i++)
	{
		temp=arr[i-1]-i;
		temp1=arr[i-1]+i;
		if(temp>0&&!check(arr,i,temp))
		arr[i]=temp;
		else
		arr[i]=temp1;

		
		
	}

}
int main()
{	pre();
	while(1)
	{
		int n;
		cin>>n;
		if(n==-1)
		break;
		
		cout<<arr[n]<<"\n";
	}
}
