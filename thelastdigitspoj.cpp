#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t_cases;
	cin>>t_cases;
	int i,k;
	for(i=0;i<t_cases;i++)
	{
		string a;
		cin>>a;
		char ch=a[a.length()-1];
		int aa=ch-'0';
		long long int b;
		cin>>b;
		long long int mod=b%4;
		long long int temp=1;
		if(b==0)
		{
			cout<<1;cout<<"\n";
		}
		else if(mod==0)
		{
			for(k=1;k<=4;k++)
			temp=temp*aa;
			int res=temp%10;cout<<res;cout<<"\n";
		}
		else
		{
			for(k=1;k<=mod;k++)
			temp=temp*aa;
			int res=temp%10;cout<<res;cout<<"\n";
		}
	}
}
