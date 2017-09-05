#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef long long int ll;
vector <ll> adj[3000];
ll color[3000];
ll n,inter;
bool bfsbipartite(ll s)
{
	ll i,j,k;
	for(i=0;i<=n;i++)
	color[i]=-1;
	color[s]=1;
	queue <ll> q;
	q.push(s);
	while(!q.empty())
	{
		ll temp=q.front();
		q.pop();
		for(i=0;i<adj[temp].size();i++)
		{
			if(color[adj[temp][i]]==-1)
			{
				color[adj[temp][i]]=1-color[temp];
				q.push(adj[temp][i]);
			}
			else if(color[adj[temp][i]]==color[temp])
			{
				return false;
			}
		}
	}
	return true;
	
	
}
int main()
{
	ll t,k=1;
	scanf("%lld",&t);
	while(t--)
	{
		ll i,j,x,y;
		for(i=0;i<3000;i++)
		adj[i].clear();
		scanf("%lld%lld",&n,&inter);
		while(inter--)
		{
			scanf("%lld%lld",&x,&y);
			adj[x].push_back(y);
			adj[y].push_back(x);
			j=x;
		}
		if(bfsbipartite(j)==true)
		{
			printf("Scenario #%lld:\n",k);
			printf("No suspicious bugs found!\n");
		}
		else
		{
			printf("Scenario #%lld:\n",k);
			printf("Suspicious bugs found!\n");
			
		}
		k++;
	}
}
