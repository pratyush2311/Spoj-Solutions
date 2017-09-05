#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t_cases;
	cin>>t_cases;
	while(t_cases--)
	{
		int n,i,j,m;
		cin>>n;
		long long int temp=0;
		long long int a[n][2];
		long long int temprad[n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<2;j++)
			{
				cin>>a[i][j];
				if(a[i][j]>temp)
				{
					temp=a[i][j];
					m=i;
				}
				
				
			}
		}
			
			
		
		
	}
}
