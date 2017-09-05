#include <iostream>
using namespace std;
int arr[34000];
int nums[34000];
void pre()
{
	int i,j,count;
	for(i=2;i<=34000;i++)
	arr[i]=1;
	for(i=2;i<=34000;i++)
	{
		if(arr[i]==1)
		{
			count=0;
			for(j=i+1;j<=34000;j++)
			{
				if(arr[j]==1)
				count++;
				if(count==i)
				{
					arr[j]=0;
					count=0;
				}
			}
		}
	}
	int t=0;
	for(i=2;i<=34000;i++)
	{
		if(arr[i]==1)
		{
			nums[t++]=i;
		}
	}
	
}
int main()
{
	pre();
	while(1)
	{
		int n;
		cin>>n;
		if(n==0)
		break;
		cout<<nums[n-1]<<"\n";
		
	}
}
