#include <iostream>
using namespace std;
int main()
{
	int num[10];
	int sum[10],i;
	for(i=0;i<10;i++)
	{
	cin>>num[i];
	}
	for(i=0;i<10;i++)
	sum[i]=0;
	sum[0]=num[0];
	for(i=1;i<10;i++)
	{
		sum[i]=sum[i-1]+num[i];
	}
	if(sum[9]<100)
	cout<<sum[9];
	else
	{
	for(i=0;i<10;i++)
	{
		if(sum[0]>100)
		{
			cout<<sum[0];
			break;
		}
		if(sum[i]==100)
		{
			cout<<100;
			break;
		}
		else if(sum[i]>100)
		{
			
			if((sum[i]-100)<(100-sum[i-1]))
			{
				cout<<sum[i];
				break;
			}
			else if((sum[i]-100)>(100-sum[i-1]))
			{
				cout<<sum[i-1];
				break;
			}
			else if((sum[i]-100)==(100-sum[i-1]))
			{
				cout<<sum[i];
				break;
			}
			
			
	}
}

	
	
	
	
	
	
}
}
