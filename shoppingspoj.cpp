#include <bits/stdc++.h>
using namespace std;
char arr[30][30];
bool visited[30][30];
int rows,col,res;
void bfs(pair <int,int> s,pair <int,int> d)
{
	memset(visited,false,sizeof(visited));
	queue < pair<int,int> > q;
	q.empty();
	res=0;
	visited[s.first][s.second]=true;
	pair <int,int> temp,temp2,temp3;
	temp.first=s.first;
	temp.second=s.second;
	q.push(temp);
	cout<<res<<" ";
	while(!q.empty())
	{
		temp2=q.front();
		q.pop();
		if(temp2.first==d.first&&temp2.second==d.second)
		break;
		if(arr[temp2.first][temp2.first]!='D')
		res+= arr[temp2.first][temp2.second]-'0';
		if(temp2.first+1<rows&&arr[temp2.first+1][temp2.second]!='X'&&!visited[temp2.first+1][temp2.second])
		{
			visited[temp2.first+1][temp2.second]=true;
			temp3.first=temp2.first+1;
			temp3.second=temp2.second;
			q.push(temp3);
		}
		if(temp2.first-1>=0&&arr[temp2.first-1][temp2.second]!='X'&&!visited[temp2.first-1][temp2.second])
		{
			visited[temp2.first-1][temp2.second]=true;
			temp3.first=temp2.first-1;
			temp3.second=temp2.second;
			q.push(temp3);
		}
		if(temp2.second+1<col&&arr[temp2.first][temp2.second+1]!='X'&&!visited[temp2.first][temp2.second+1])
		{
			visited[temp2.first][temp2.second+1]=true;
			temp3.first=temp2.first;
			temp3.second=temp2.second+1;
			q.push(temp3);
		}
		if(temp2.second-1>=0&&arr[temp2.first][temp2.second-1]!='X'&&!visited[temp2.first][temp2.second-1])
		{
			visited[temp2.first][temp2.second-1]=true;
			temp3.first=temp2.first;
			temp3.second=temp2.second-1;
			q.push(temp3);
		}
	}

	
}
int main()
{
	while(1)
	{
		scanf("%d%d",&rows,&col);
		int i,j;
		if(rows==0&&col==0)
		break;
		pair <int,int> s,d;
		for(i=0;i<rows;i++)
		{
			for(j=0;j<col;j++)
			{
				scanf("%c",&arr[i][j]);
				if(arr[i][j]=='S')
				{
					s.first=i;
					s.second=j;
				}
				if(arr[i][j]=='D')
				{
					d.first=i;
					d.second=j;
				}
				
			}
		}
		arr[30][30]='0';
		bfs(s,d);
		cout<<res;
		
		
	}
}
