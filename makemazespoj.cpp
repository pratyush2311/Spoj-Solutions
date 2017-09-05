#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t_cases;
	scanf("%d",&t_cases);
	while(t_cases--)
	{
		int m,n,i,j;
		scanf("%d%d",&m,&n);
		vector < pair<int,int> > entries;
		entries.clear();
		char arr[25][25];
		bool visited[25][25]={{0}};
		int temp=0;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>arr[i][j];
				if((i==0||i==m-1||j==n-1||j==0)&&arr[i][j]=='.')
				{
					entries.push_back(make_pair(i,j));
					temp++;
					
				}
			}
		}
		if(temp!=2)
		{
			cout<<"invalid\n";
			
		}
		else
		{
			int flag=0;
			stack < pair<int,int> > dfs;
			pair <int,int> dest,temp1;
			dest=make_pair(entries.at(1).first,entries.at(1).second);
			dfs.push(make_pair(entries.at(0).first,entries.at(0).second));
			while(!dfs.empty())
			{
				temp1=dfs.top();
				dfs.pop();
				if(visited[temp1.first][temp1.second]||temp1.first>=m||temp1.first<0||temp1.second>=n||temp1.second<0)
				continue;
				if(temp1.first==dest.first&&temp1.second==dest.second)
				{
					flag=1;
					break;
					
				}
				visited[temp1.first][temp1.second]=1;
				if(arr[temp1.first][temp1.second]=='#')
				continue;
				dfs.push(make_pair(temp1.first+1,temp1.second));
				dfs.push(make_pair(temp1.first-1,temp1.second));
				dfs.push(make_pair(temp1.first,temp1.second+1));
				dfs.push(make_pair(temp1.first,temp1.second-1));
			}
			if(flag==1)
			cout<<"valid\n";
			else
			cout<<"invalid\n";
		}
		
	}
}
