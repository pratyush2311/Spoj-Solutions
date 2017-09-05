#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector < pair<ll,ll> > adj[60000];
bool visited[60000];
ll maxwt[60000];
ll n;
void bfs(ll s)
{
	ll i;
	memset(visited,false,sizeof(visited));
	memset(maxwt,0,sizeof(maxwt));
	queue < pair<ll,ll> > q;
	q.push(make_pair(s,0));
	while(!q.empty())
	{
		ll temp=q.front().first;
		ll wt=q.front().second;
		visited[temp]=true;
		for(i=0;i<adj[temp].size();i++)
		{
			if(!visited[adj[temp][i].first])
			{
				q.push(make_pair(adj[temp][i].first,wt+adj[temp][i].second));
			}
		}
		maxwt[temp]=wt;
		q.pop();
	}
}
int main()
{
	ll t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		ll i,j,k,x,y,w;
		for(i=0;i<60000;i++)
		adj[i].clear();
		scanf("%lld",&n);
		for(i=1;i<=n-1;i++)
		{
			scanf("%lld%lld%lld",&x,&y,&w);
			adj[x].push_back(make_pair(y,w));
			adj[y].push_back(make_pair(x,w));
		}
		bfs(1);
		ll maxroot=0;
		for(i=1;i<=n;i++)
		{
			maxroot=maxwt[maxroot]<maxwt[i]?i:maxroot;
		}
		bfs(maxroot);
		maxroot=0;
		for(i=1;i<=n;i++)
		{
			maxroot=max(maxroot,maxwt[i]);
		}
		printf("%lld\n",maxroot);
		
	}
}
