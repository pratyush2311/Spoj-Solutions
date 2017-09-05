#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;
int main()
{
	int t_cases;
	scanf("%d",&t_cases);
	while(t_cases--)
	{
		long long int n,i,j;
		scanf("%lld",&n);
		vector <string> st;
		for(i=0;i<n;i++)
		{
			string s;
			cin>>s;
			st.push_back(s);
		}
		sort(st.begin(),st.end());
		int flag=0;
		for(i=0;i<n-1;i++)
		{
			
			int len=st[i].length();
			string temp=st[i+1];
			if(st[i].compare(temp)==0)
			continue;
			if(st[i].compare(temp.substr(0,len))==0)
			{
				flag=1;
				break;
			}
					
		}
		if(flag==1)
		printf("NO\n");
		else
		printf("YES\n");
		st.clear();
	}
}
