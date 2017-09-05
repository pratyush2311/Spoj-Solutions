#include <iostream>
using namespace std;
int main()
{
	int t_cases;
	cin>>t_cases;
	while(t_cases--)
	{
		long long int n;
		long long int r=0;
		long long int i=2;
		cin>>n;
		if(n==1)
		cout<<"poor conductor\n";
		else if((n+8)%10==0||(n-1)%10==0)
		{
		
			while(n>=i)
			{
				r++;
				i+=5;
				
			}
			
			cout<<r<<" "<<"W L\n";
			
			
		}
		else if((n+7)%10==0||n%10==0)
		{
				while(n>=i)
			{
				r++;
				i+=5;
				
			}
			cout<<r<<" "<<"A L\n";
		}
		else if((n+1)%5==0)
		{
			while(n>=i)
			{
				r++;
				i+=5;
				
			}
			cout<<r<<" "<<"A R\n";
			
		}
		else if((n+5)%10==0||(n+2)%10==0)
		{
				while(n>=i)
			{
				r++;
				i+=5;
				
			}
			cout<<r<<" "<<"M R\n";
		}
		else if((n+4)%10==0||(n+3)%10==0)
		{
				while(n>=i)
			{
				r++;
				i+=5;
				
			}
			cout<<r<<" "<<"W R\n";
			
		}
	}
}
