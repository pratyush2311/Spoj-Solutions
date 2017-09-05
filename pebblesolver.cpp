#include <iostream>
#include <string>
#include <string.h>
using namespace std;
bool check(string s,int n)
{
	int i;
	char c;
	for(i=0;i<n;i++)
	{
		c=s[i];
		if(c=='1')
		return false;
	}
	return true;
	
}
int main()
{
	char s[1000000];
	int k=1;
	while(scanf("%s",s)!=EOF)
		{
			int n=strlen(s);
			char c;
			char c2;
			int i,j;
			int count=0;
			for(i=0;i<n;i++)
			{
				if(check(s,n)==true)
				{
					break;
				}
				c=s[i];
				if(c=='1')
				{
					count++;
					for(j=i;j<n;j++)
					{
						c2=s[j];
						if(c2=='1')
						s[j]='0';
						else
						s[j]='1';
					}
					
				}
				
			}
			cout<<"Game #"<<k<<": "<<count<<"\n";
			k++;
			
			
			
			
		}
	  
}
