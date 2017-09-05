#include <iostream>
using namespace std;
int main()
{
	int test_cases;
	cin>>test_cases;
	int i;
	for(i=0;i<test_cases;i++)
	{
		int number;
		cin>>number;
		int k;
		int arr[200];
		arr[0]=1;
		int x;
		int temp=0;
		int m=1;
		int j;
		for(k=1;k<=number;k++)
		{
			for(j=0;j<m;j++)
			{
				x=arr[j]*k+temp;
				arr[j]=x%10;
				temp=x/10;
				
			}
			while(temp>0)
			{
				arr[m]=temp%10;
				temp=temp/10;
				m++;
				
			}			
		}
		for(int c=m-1;c>=0;c--)
			cout<<arr[c];
		
		cout<<"\n";	
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
}
