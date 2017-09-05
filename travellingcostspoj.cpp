#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector < pair<ll,ll> > graph[1050];
ll dist[1050];
bool operator <(pair <ll,ll> a,pair <ll,ll> b)
{
	return a.second<b.second;
}

void dijkstra(ll src)
{
	ll i;
	for(i=0;i<1050;i++)
	dist[i]=100000000;
	priority_queue < pair<int,int> > q;
	dist[src]=0;
	q.push(make_pair(src,0));
	while(!q.empty())
	{
		pair <ll,ll> p=q.top();
		q.pop();
		for(i=0;i<graph[p.first].size();i++)
		{
			pair <ll,ll> k=graph[p.first][i];
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
	ll roads,i,u,v,w,src;
	scanf("%lld",&roads);
	for(i=0;i<roads;i++)
	{
		scanf("%lld%lld%lld",&u,&v,&w);
		graph[u].push_back(make_pair(v,w));
		graph[v].push_back(make_pair(u,w));
	}
	scanf("%lld",&src);
	dijkstra(src);
	ll n_ver,ver;
	scanf("%lld",&n_ver);
	while(n_ver--)
	{
		scanf("%lld",&ver);
		if(dist[ver]==100000000)
		printf("NO PATH\n");
		else
		printf("%lld\n",dist[ver]);
	}
	
	
}
