#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dist[9][9];
ll visited[9][9];
void bfs(pair <ll,ll> s,pair <ll,ll> d)
{
	ll i;
	memset(visited,false,sizeof(visited));
	queue < pair<ll,ll> > q;
	pair <ll,ll> t1,t2;
	q.push(s);
	visited[s.first][s.second]=true;
	dist[s.first][s.second]=0;
	while(!q.empty())
	{
		t1=q.front();
		q.pop();
		if(t1.first-2>=1&&t1.second+1<=8&&!visited[t1.first-2][t1.second+1])
		{
			t2.first=t1.first-2;
			t2.second=t1.second+1;
			q.push(t2);
			visited[t1.first-2][t1.second+1]=true;
			dist[t1.first-2][t1.second+1]=dist[t1.first][t1.second]+1;
		}
		if(t1.first-2>=1&&t1.second-1>=1&&!visited[t1.first-2][t1.second-1])
		{
			t2.first=t1.first-2;
			t2.second=t1.second-1;
			q.push(t2);
		
			visited[t1.first-2][t1.second-1]=true;
			dist[t1.first-2][t1.second-1]=dist[t1.first][t1.second]+1;
		}
		if(t1.first+2<=8&&t1.second+1<=8&&!visited[t1.first+2][t1.second+1])
		{
			t2.first=t1.first+2;
			t2.second=t1.second+1;
			q.push(t2);
			
			visited[t1.first+2][t1.second+1]=true;
			dist[t1.first+2][t1.second+1]=dist[t1.first][t1.second]+1;
		}
		if(t1.first+2<=8&&t1.second-1>=1&&!visited[t1.first+2][t1.second-1])
		{
			t2.first=t1.first+2;
			t2.second=t1.second-1;
			q.push(t2);
			visited[t1.first+2][t1.second-1]=true;
			dist[t1.first+2][t1.second-1]=dist[t1.first][t1.second]+1;
		}
		if(t1.first+1<=8&&t1.second+2<=8&&!visited[t1.first+1][t1.second+2])
		{
			t2.first=t1.first+1;
			t2.second=t1.second+2;
			q.push(t2);
			visited[t1.first+1][t1.second+2]=true;
			dist[t1.first+1][t1.second+2]=dist[t1.first][t1.second]+1;
		}
		if(t1.first-1>=1&&t1.second+2<=8&&!visited[t1.first-1][t1.second+2])
		{
			t2.first=t1.first-1;
			t2.second=t1.second+2;
			q.push(t2);
			visited[t1.first-1][t1.second+2]=true;
			dist[t1.first-1][t1.second+2]=dist[t1.first][t1.second]+1;
		}
		if(t1.first-1>=1&&t1.second-2>=1&&!visited[t1.first-1][t1.second-2])
		{
			t2.first=t1.first-1;
			t2.second=t1.second-2;
			q.push(t2);
			visited[t1.first-1][t1.second-2]=true;
			dist[t1.first-1][t1.second-2]=dist[t1.first][t1.second]+1;
		}
		if(t1.first+1<=8&&t1.second-2>=1&&!visited[t1.first+1][t1.second-2])
		{
			t2.first=t1.first+1;
			t2.second=t1.second-2;
			q.push(t2);
			visited[t1.first+1][t1.second-2]=true;
			dist[t1.first+1][t1.second-2]=dist[t1.first][t1.second]+1;
		}
		
		
		
	}
}
int main()
{
	ll t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		string src,des;
		cin>>src>>des;
		pair < ll,ll> s,d;
		s.second=src[0]-96;
		s.first=src[1]-48;
		d.first=des[1]-48;
		d.second=des[0]-96;
		bfs(s,d);
		cout<<dist[d.first][d.second]<<endl;
//		
	}
}
