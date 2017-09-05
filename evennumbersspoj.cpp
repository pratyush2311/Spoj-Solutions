#include <iostream>
using namespace std;
long long int power(int x,long long int y)
{
    long long int ans =1;
    while(y>0)
    {
        if(y%2>0)
            ans = (ans * x) ;
        x = (x * x) ;
        y=y/2;

    }
    return ans;
}
int main()
{
	long long int i,n;
	cin>>n;
	long long int num[n];
	for(i=0;i<n;i++)
	cin>>num[i];
	i=0;
	while(i<n)
	{
		if(num[i]%2==1)
		cout<<num[i]<<"\n";
		else
		{
			int arr[100000];
			long long int temp,k;
			long long int j=0;
			while(num[i]>0)
			{
				temp=num[i]%2;
				arr[j++]=temp;
				num[i]=num[i]/2;
				
			}
			long long int sum=0;
			long long int t=0;
			for(k=0;k<j;k++)
			{
				if(arr[k]==1)
				{
					t=k;
					break;
				}
			}
			long long int l=0;
			for(k=j-1;k>=t;k--)
			{
				sum+=arr[k]*power(2,l);
				l++;
				
			}
			cout<<sum<<"\n";
			
			
		}
		i++;
	}
}
