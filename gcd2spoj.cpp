#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
	if(b==0)
	return a;
	else
	{
		return gcd(b,a%b);
	}	
}
long long int modu(string s,long long int a)
{
	long long int n=s.length();
	long long int m,d=0;
	for(int i=0;i<n;i++)
	{
		m=d*10+(s[i]-'0');
		d=m%a;
	}
	return d;	
}
int main()
{
	int t_cases;
	scanf("%d",&t_cases);
	while(t_cases--)
	{
		long long int a;
		cin>>a;
		string s;
		cin>>s;
		if(a==0&&s[0]=='0')
		{
			cout<<0<<endl;
			continue;
		}
		if(a==0)
		{
			cout<<s<<endl;
			continue;
		}
		long long int b=modu(s,a);
		long long int ans=gcd(a,b);
		cout<<ans<<endl;
	}	
}
