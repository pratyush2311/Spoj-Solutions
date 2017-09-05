#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int minumum(int a,int b)
{
	if(a<=b)
	return a;
	else 
	return b;
}
int main()
{
	char s1[2000],s2[2000];
	while(scanf("%s",s1)!=EOF)
	{
		int s3[2000],i,s4[2000];
		memset(s3,0,sizeof(s3));
		memset(s4,0,sizeof(s4));
		scanf("%s",s2);
		vector <char> s;
	 	int n=strlen(s1);
	 	int n2=strlen(s2);
		for(i=0;i<n;i++)
		{
			s3[s1[i]-'0']++;
		}
		for(i=0;i<n2;i++)
		{
			s4[s2[i]-'0']++;
		}
		for(i=0;i<n;i++)
		{
			if(s4[s1[i]-'0']!=0)
			{
				if(find(s.begin(),s.end(),s1[i])==s.end())
				{
				
					int temp=minumum(s4[s1[i]-'0'],s3[s1[i]-'0']);
					while(temp--)
					s.push_back(s1[i]);
				}
				
			}
		}
		sort(s.begin(),s.end());
		vector <char>::iterator it;
		it=s.begin();
		while(it!=s.end())
		{
			cout<<*it;
			it++;
		}
		cout<<"\n";
		s.clear();
		memset(s1,0,sizeof(s1));
		memset(s2,0,sizeof(s2));
	}
	
	
	
	
	
	
	
	
}
