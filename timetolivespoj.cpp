#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <ll> adj[1000000];
vector <ll> v,st;
ll maxwt[1000000];
bool visited[1000000];
ll n;
void bfs(ll s)
{
	queue < pair<ll,ll> > q;
	q.push(make_pair(s,0));
	memset(visited,false,sizeof(visited));
	while(!q.empty())
	{
		int temp=q.front().first;
		int wt=q.front().second;
		visited[temp]=true;
		for(ll i=0;i<adj[temp].size();i++)
		{
			if(!visited[adj[temp][i]])
			{
				q.push(make_pair(adj[temp][i],wt+1));
				
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
		v.clear();
		st.clear();
		ll i,j,k,x,y;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		adj[i].clear();
		for(i=0;i<=n-2;i++)
		{
			scanf("%lld%lld",&x,&y);
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		bfs(0);
		ll maxroot=0;
		for(i=0;i<n;i++)
		{
			maxroot=maxwt[maxroot]<maxwt[i]?i:maxroot;
		}
		memset(maxwt,0,sizeof(maxwt));
		bfs(maxroot);
		maxroot=0;
		for(i=0;i<n;i++)
		{
			maxroot=max(maxroot,maxwt[i]);
		}
		if(maxroot%2==0)
		maxroot=maxroot/2;
		else
		maxroot=(maxroot+1)/2;
		printf("%lld\n",maxroot);
	}
	
}
