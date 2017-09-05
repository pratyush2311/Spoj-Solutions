#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[1000];
	while(scanf("%s",s)!=EOF)
	{
		int len=strlen(s);
		char c=s[0];
		int i;
		char t,a;;
		int count=0;
		if(c>=97&&c<=122)
		{
			for(i=1;i<=len-1;i+=2)
			{
				t=s[i];
				if(i==len-1)
				a='*';
				else
				a=s[i+1];
				if(t>=97&&t<=122)
				count++;
				if(a>=65&&a<=90)
				count++;
			}
		}
		else
		{
			for(i=1;i<=len-1;i+=2)
			{
				t=s[i];
				if(i==len-1)
				a='*';
				else
				a=s[i+1];
				if(t>=65&&t<=90)
				count++;
				if(a>=97&&a<=122)
				count++;
				
			}
			
		}
		cout<<count<<"\n";
		
	}
}
