#include <iostream>
using namespace std;
int main()
{
	int t_cases;
	cin>>t_cases;
	while(t_cases--)
	{
		long long int n,i;
		cin>>n;
		int a[n];
		string s;
		for(i=0;i<n;i++)
		{
			cin>>s;
			if(s[0]=='l')
			a[i]=0;
			else
			a[i]=1;
		}
		int t;
		if(a[0]==a[1])
		t=1;
		else 			
		t=0;
		for(i=2;i<n;i++)
		{
			if(t==a[i])
			t=1;
			else
			t=0;
		}
		if(t==0)
		cout<<"lxh"<<"\n";
		else
		cout<<"hhb"<<"\n";
		
		
		
		
	
	}
}
