#include <iostream>
using namespace std;
int main()
{
	long long int a,b,j;
	cin>>a>>b;
	for(j=a;j<=b;j++)
	{		
	double result=j;
	long long int temp=j;
	long long int i;
		for(i=2;i*i<=temp;i++)
		{
			if(temp%i==0)
			{
				while(temp%i==0)
				temp=temp/i;
				result*=(1-(1.0/(double)i));
			}
			
		}
	
		if(temp>1)
		result*=(1-(1.0/(double)temp));
		cout<<result<<"\n";
}
		
		
}
