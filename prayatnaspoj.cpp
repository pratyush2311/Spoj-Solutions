#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <ll> adj[1000000];
bool visited[1000000];
void bfs(ll s)
{
	ll i;
	visited[s]=true;
	queue <ll> q;
	q.push(s);
	while(!q.empty())
	{
		int temp=q.front();
		q.pop();
		for(i=0;i<adj[temp].size();i++)
		{
			if(!visited[adj[temp][i]])
			{
				visited[adj[temp][i]]=true;
				q.push(adj[temp][i]);
			}
		}
	}
}
int main()
{
	int t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		ll i,n,e,x,y,j;
		scanf("%lld%lld",&n,&e);
		for(i=0;i<n;i++)
		adj[i].clear();
		for(i=0;i<e;i++)
		{
			scanf("%lld%lld",&x,&y);
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		
		memset(visited,false,sizeof(visited));
		ll count=0;
		for(i=0;i<n;i++)
		{
			if(visited[i]==false)
			{
				count++;
				bfs(i);
			}
		
		}
		for(i=0;i<=n-1;i++)
		{
			if(visited[i]==false)
			count++;
		}
		printf("%lld\n",count);
		
	}
}
