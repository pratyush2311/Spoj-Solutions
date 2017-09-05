#include <map>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t_cases;
	scanf("%d",&t_cases);
	while(t_cases--)
	{
		map <string,int> score;
		int i;
		for(i=1;i<=16;i++)
		{
			string t1,t2;
			int s1,s2;
			cin>>t1>>t2>>s1>>s2;
			if(s1>s2)
			{
				score[t1]++;
				score[t2]--;
				
			}
			else
			{
				score[t1]--;
				score[t2]++;
				
			}
		}
		map <string,int>::iterator it;
		string temp;
		int sc=-1;
		for(it=score.begin();it!=score.end();it++)
		{
			if(it->second>sc)
			{
				sc=it->second;
				temp=it->first;
			}
			
		}
		cout<<temp<<endl;
		score.clear();
	}
}
