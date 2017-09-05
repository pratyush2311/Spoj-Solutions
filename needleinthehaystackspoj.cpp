#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll temp[10000000];
ll temp2[1000000];
int main()
{
	ll u;
	while(scanf("%d",&u)!=EOF)
	{
		memset(temp2,0,sizeof(temp2));
		ll t=1;
		char s[1000000],pattern[1000000];
		scanf("%s",pattern);
		scanf("%s",s);
		ll m, n,i,j;
		m=strlen(s);
		n=strlen(pattern);
		i=0;
		j=1;
		temp[0]=0;
		while(j<n)
		{
			if(pattern[i]==pattern[j])
			{
				temp[j]=i+1;
				i++;
				j++;
			}
			else
			{
			
					if(i!=0)
					i=temp[i-1];
					else
					{
						temp[j]=0;
						j++;
					}
				
			}
		}
		ll flag;
		flag=0;
		i=0;
		j=0;
		ll k=0;
		while(j<m)
		{
			if(pattern[i]==s[j])
			{
				i++;
				j++;
			}
			if(i==strlen(pattern))
			{
				
				temp2[k++]=j-i;
				i=temp[i-1];
				flag=1;
				
			}
			
			else if(j<m&&pattern[i]!=s[j])
			{
				if(i!=0)
				i=temp[i-1];
				else
				{
					j++;
				}
			}
				
		}
		if(flag==1)
		{
			for(i=0;i<k;i++)
			cout<<temp2[i]<<endl;
		}
		else
		{
			if(t==1)
			{
				cout<<endl;
				cout<<endl;
			}
			else
			{
				cout<<endl;
			}
		
		}
		t++;
		
		
		
		
		
		
		
				
	}
	
	
	
	
}
