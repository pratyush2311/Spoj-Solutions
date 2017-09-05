#include <bits/stdc++.h>
using namespace std;
bool operator <(pair <int,int> a,pair <int,int> b)
{
	return a.second<b.second;
}
vector < pair<int,int> > graph[200];
int dist[200];
void dijkstra(int src,int end,int nodes)
{
	int i;
	for(i=1;i<=nodes;i++)
	dist[i]=10000000;
	priority_queue < pair<int,int> > q;
	q.push(make_pair(src,0));
	dist[src]=0;
	while(!q.empty())
	{
		pair <int,int> p=q.top();
		q.pop();
		for(i=0;i<graph[p.first].size();i++)
		{
			pair <int,int> k=graph[p.first][i];
			if(dist[p.first]+k.second<dist[k.first])
			{
				dist[k.first]=dist[p.first]+k.second;
				q.push(k);
			}
		}
	}
}
int main()
{
	int n,e,t,m,u,v,w,i,j,k;
	scanf("%d%d%d%d",&n,&e,&t,&m);
	for(i=0;i<m;i++)
	{
		scanf("%d%d%d",&u,&v,&w);
		graph[u].push_back(make_pair(v,w));
	}
	int count=0;
	for(i=1;i<=n;i++)
	{
		dijkstra(i,e,n);
		if(dist[e]<=t)
		count++;
	}
	cout<<count<<endl;
}
