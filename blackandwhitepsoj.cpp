#include <iostream>
#include <string>
using namespace std;
int main()
{
	while(1)
	{
		string s1,s2;
		int i;
		cin>>s1>>s2;
		if(s1[0]=='*')
		break;
		int count=0;
		char c1,c2;
		for(i=0;i<s1.length();i++)
		{
			c1=s1[i];
			c2=s2[i];
			if(c1!=c2)
			count++;
			while(c1!=c2)
			{
			i++;
			c1=s1[i];
			c2=s2[i];
			}
		}
		cout<<count<<"\n";
	}
	
}
