#include <iostream>
using namespace std;
int main()
{
	
	long long int n,m,i;
	cin>>n>>m;
	long long int c[n];
	for(i=0;i<n;i++)
	cin>>c[i];
	long long int result=-1;
	long long int temp=0,j=0;
	int flag=0;
	loop:for(i=j;i<n;i++)
	{
		temp+=c[i];
		if(temp==m)
		{
			cout<<temp;
			flag=1;
			break;
		}
		else if(temp>m)
		{
			
			temp-=c[i];
			if(temp>result)
			{
				result=temp;
			}
			j++;
			temp=0;
			goto loop;
			
		}
		
		
		
	}
	if(flag==0)
	cout<<result;
	
}
