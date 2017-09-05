#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
	string s;
	char c;
	while((cin>>s))
	{
		int i,j;
		int flag=0;
		for(i=0;i<s.length();i++)
		{
			c=s[i];
			if(isupper(c))
			{
				flag=1;
				break;
			}
			if(c=='_')
			{
				flag=2;
				break;
			}
			
			
		}
		if(flag==1)
		{
			//Java
			for(i=0;i<s.length();i++)
			{
				c=s[i];
				if(isupper(c))
				{
					putchar(tolower(c));
					for(j=s.length();j>i;j--)
					{
						s[j]=s[j-1];
					}
					s[i]='_';
					
				}
			}
			for(i=0;i<s.length();i++)
			{
				cout<<s[i]<<"\n";
			}
		}
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
}
