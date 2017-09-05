#include <iostream>
#include <stack>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	int i=1;
	while(true)
	{
		stack <char> s1;
		
		int j;
		int value;
		int res=0;
		string s;
		cin>>s;
		if(s[0]=='-')
		break;
		for(j=0;j<s.length();j++)
		{
			if(s[j]=='{')
			s1.push(s[j]);
			else if(s[j]=='}')
			{
				
				if(!s1.empty())
				{
					char c=s1.top();
					if(c=='{')
					s1.pop();
					else
					s1.push(s[j]);
				}
				else
				s1.push(s[j]);
			
			}
		
		
		}
		int left,right;
		left=right=0;
		while(!s1.empty())
		{
			if(s1.top()=='{')
			left++;
			else
			right++;
			s1.pop();
		}
		if(left%2==0)
		res+=left/2;
		else
		res+=left/2+1;
		if(right%2==0)
		res+=right/2;
		else
		res+=right/2+1;
		
		cout<<i<<". "<<res<<endl;
		i++;
			
	}
	
}
