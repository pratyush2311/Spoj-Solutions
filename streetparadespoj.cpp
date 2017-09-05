#include <iostream>
#include <stack>
using namespace std;
int main()
{
	while(1)
	{
		int n;
		cin>>n;
		if(n==0)
		break;
		int input[n],new_arr[10000],i;
		stack <int> s;
		while(!s.empty())
		s.pop();		
		for(i=0;i<n;i++)
		{
			cin>>input[i];
		}
		int num=1;
		for(i=0;i<n;i++)
		{
			if(input[i]==num)
			{
				new_arr[num++]=input[i];
				continue;
			}
			while(!s.empty()&&s.top()==num)
			{
				new_arr[num++]=s.top();
				s.pop();
			}
			s.push(input[i]);
		}
		while(s.size()!=0)
		{
			new_arr[num++]=s.top();
			s.pop();
			
		}
		int flag=0;
		for(i=1;i<=n;i++)
		{
			if(new_arr[i]!=i)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		cout<<"yes"<<"\n";
		else
		cout<<"no"<<"\n";
		
	
		
		
		
	}
}
