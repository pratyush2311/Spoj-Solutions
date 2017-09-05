#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		string app;
		string diff;
		string s1="";
		int g=0;
		cin>>app>>diff;
		int len_app=app.length();
		int len_diff=diff.length();
		int i,j,k;
		for(i=len_app-1;i>=0;i--)
		{
			for(j=len_diff;j>=0;j--)
			{
				k=app[i]+diff[j]-'0';
				if(i==0&&k>10)
				s1[g++]=k;
				else
				s1[g++]=k%10;
				if(k>10)
				app[i-1]=(int)app[i-1]+(k/10);
				
			}
			
		}
		for(i=g-1;i>=0;i++)
		cout<<s1[i];
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
}
