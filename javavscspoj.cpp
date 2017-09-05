#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	
	string s;
	while(getline(cin,s))
	{
		int temp=0;
		char s1[10000];
		int i,flag=0;
		int n=s.length();
		if(isupper(s[0])||s[0]=='_')
		{
			cout<<"Error!"<<endl;
			continue;
		}
		for(i=0;i<n;i++)
		{
			if(isupper(s[i]))
			{
				flag=1;//java
				break;
			}
			if(s[i]=='_')
			{
				flag=2;//c++
				break;
			}
			
		}
	
		if(flag==1)
		{
			for(i=0;i<n;i++)
			{
				if(islower(s[i])||isupper(s[i])||isdigit(s[i]))
				continue;
				else
				{
					temp=1;
					
				}
			}
			if(temp==1)
			{
				cout<<"Error!"<<endl;
				continue;
			}
			else
			{
				int k=0;
			
				for(i=0;i<s.length();i++)
				{
					if(islower(s[i])||isdigit(s[i]))
					s1[k++]=s[i];
					else if(isupper(s[i]))
					{
						s1[k]='_';
						s1[++k]=tolower(s[i]);
						k++;
						
					}
				}
				cout<<s1<<endl;
				memset(s1,0,sizeof(s1));
			}
		}
		else if(flag==2)
		{
			for(i=0;i<n;i++)
			{
				if(islower(s[i])||isdigit(s[i]))
				continue;
				else if(s[i]=='_')
				{
					if(islower(s[i+1]))
					continue;
					else if(s[i+1]=='_'||i==(n-1))
					temp=1;
					
				}
				else
				temp=1;
			}
			if(temp==1)
			{
				cout<<"Error!"<<endl;
				continue;
			}
			
			else
			{
				int j=0;
				for(i=0;i<s.length();i++)
				{
					if(islower(s[i])||isdigit(s[i]))
					s1[j++]=s[i];
					else
					{
						s1[j++]=toupper(s[i+1]);
						i++;
					}

				}
				cout<<s1<<endl;
				memset(s1,0,sizeof(s1));
				
			}
		}
		else
		{
			cout<<s<<endl;
		}
		
		
		
		
		
	}

}
