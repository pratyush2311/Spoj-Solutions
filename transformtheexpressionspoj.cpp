#include <string>
#include <algorithm>
#include <iostream>
#include <stack>
using namespace std;
bool isoperand(char ch)
{
	if((ch >= 'a' && ch<= 'z' )||(ch >= 'A' && ch<='Z') ) return true;
	return false;
}
int precedence(char ch)
{
	if(ch=='+'||ch=='-')
	return 1;
	else if(ch=='*'||ch=='/')
	return 2;
	else if(ch=='^')
	return 3;
	else 
	return -1;
}
int main()
{
	int t_cases;
	cin>>t_cases;
	while(t_cases--)
	{
		string s;
		cin>>s;
		
		stack <char> st;
		int n=s.length();
		int i;
		char c,d;
		for(i=0;i<n;i++)
		{
			c=s[i];
			if(isoperand(c))
			cout<<c;
			else if(c=='(')
			{
				st.push(c);
			}
			else if(c==')')
			{
				
				while(st.top()!='(')
				{
					
					cout<<st.top();
					st.pop();
				}
				st.pop();
			
				
			}
			else if(c=='+'||c=='-'||c=='/'||c=='*'||c=='^')
			{
				if(st.empty()||precedence(c)>precedence(st.top()))
				{
					st.push(c);
				}
				else
				{
					while(precedence(st.top()>=precedence(c)))
					{
						cout<<st.top();
						st.pop();
					}
					st.push(c);
				}
				
			}
			
			
		}
		while(!st.empty())
		{
			if(st.top()=='(')
			st.pop();
			else{
			
			cout<<st.top();
			st.pop();
		}
		}
		cout<<"\n";
		
	
	}
	
	
	
	
	
	
}
