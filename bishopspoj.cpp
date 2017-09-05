#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	string s;
	while(cin>>s)
	{
		if(s[0]=='0')
		{
			cout<<0<<endl;
			continue;
		}
		if(s[0]=='1'&&s.length()==1)
		{
			cout<<1<<endl;
			continue;
		}
		ll n=s.length();
		ll arr[n+1],temp,i;
		ll t= n-1;
		arr[0]=0;
		for(i=n;i>0;i--)
		{
			arr[i]=s[t]-'0';
			t--;
		}
		ll carry=0;
		for(i=n;i>=0;i--)
		{
			temp=carry+arr[i]*2;
			if(temp>=10)
			{
				arr[i]=temp%10;
				carry=1;
			}
			else
			{
				arr[i]=temp;
				carry=0;
			}
		}
		if(arr[n]>=2)
		arr[n]=arr[n]-2;
		else
		{
			arr[n]=10+arr[n]-2;
			if(arr[n-1]>0)
			arr[n-1]--;
			else
			{
				i=n-1;
				while(arr[i]==0)
				{
					
					arr[i]=9;
					i--;
				}
				if(arr[i]>0)
				arr[i]--;
				
				
			}
		
		}
		if(arr[0]>0)
		i=0;
		else
		i=1;
		for(i;i<=n;i++)
		cout<<arr[i];
		cout<<endl;
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
}
