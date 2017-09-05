#include <iostream>
#include <string>
using namespace std;
int main()
{
	while(1)
	{
		string s;
		getline(cin,s);
		if(s[0]=='*')
		break;
		int space[s.length()];
		int i,j=0;
		int spaces=0;
		for(i=0;i<s.length();i++)
		{
			char c=s[i];
			s[i]=(tolower(c));
			if(s[i]==' ')
			{
				space[j]=i;
				j++;
				spaces++;
			}
		}
		if(j==0)
		cout<<"Y"<<"\n";
		else
		{
			int count=0;
			for(i=0;i<j;i++)
			{
				if(s[0]==s[space[i]+1])
				count++;
				
			
			}
			if(count==spaces)
			cout<<"Y"<<"\n";
			else
			cout<<"N"<<"\n";
		}
		
		
		
		
		
		
		
	}
	
	
	
	
	
}
