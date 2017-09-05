#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
using namespace std;
bool visited[1009][1009];
char arr[1009][1009];
typedef long long int ll;
ll n,m;
void bfs(pair <ll,ll> s)
{
	visited[s.first][s.second]=true;
	queue < pair<ll,ll> > q;
	q.push(s);
	pair <ll,ll> p,t;
	while(!q.empty())
	{
		p=q.front();
		q.pop();
		if(arr[p.first][p.second]=='S'&&p.first+1<n&&!visited[p.first+1][p.second])
		{
			visited[p.first+1][p.second]=true;
			t.first=p.first+1;
			t.second=p.second;
			q.push(t);
		}
		if(arr[p.first][p.second]=='N'&&p.first-1>=0&&!visited[p.first-1][p.second])
		{
			visited[p.first-1][p.second]=true;
			t.first=p.first-1;
			t.second=p.second;
			q.push(t);
		}
		if(arr[p.first][p.second]=='W'&&p.second-1>=0&&!visited[p.first][p.second-1])
		{
			visited[p.first][p.second-1]=true;
			t.first=p.first;
			t.second=p.second-1;
			q.push(t);
		}
		if(arr[p.first][p.second]=='E'&&p.second+1<m&&!visited[p.first][p.second+1])
		{
			visited[p.first][p.second+1]=true;
			t.first=p.first;
			t.second=p.second+1;
			q.push(t);
		}
		if(p.second+1<m)
		{
			if(arr[p.first][p.second+1]=='W'&&!visited[p.first][p.second+1])
			{
				visited[p.first][p.second+1]=true;
				t.first=p.first;
				t.second=p.second+1;
				q.push(t);
			}
		}
		if(p.second-1>=0)
		{
			if(arr[p.first][p.second-1]=='E'&&!visited[p.first][p.second-1])
			{
				visited[p.first][p.second-1]=true;
				t.first=p.first;
				t.second=p.second-1;
				q.push(t);
			}
		}
		if(p.first+1<n)
		{
			if(arr[p.first+1][p.second]=='N'&&!visited[p.first+1][p.second])
			{
				visited[p.first+1][p.second]=true;
				t.first=p.first+1;
				t.second=p.second;
				q.push(t);
			}
		}
		if(p.first-1>=0)
		{
			if(arr[p.first-1][p.second]=='S'&&!visited[p.first-1][p.second])
			{
				visited[p.first-1][p.second]=true;
				t.first=p.first-1;
				t.second=p.second;
				q.push(t);
			}
		}
	}
	
		
	
}
	

int main()
{
	ll i,j,k;
	scanf("%lld%lld",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		cin>>arr[i][j];
	}
	memset(visited,false,sizeof(visited));
	pair <ll,ll> p;
	ll count=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(!visited[i][j])
			{
				p.first=i;
				p.second=j;
				bfs(p);
				count++;
			}
		}
	}
	printf("%lld\n",count);
	
}

