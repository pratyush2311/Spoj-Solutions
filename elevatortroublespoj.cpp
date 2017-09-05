#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool visited[1000009];
ll dis[1000009];
ll f,u,d;
void bfs(ll s,ll g)
{
	ll i;
	memset(visited,false,sizeof(visited));
	queue <ll> q;
	q.push(s);
	visited[s]=true;
	dis[s]=0;
	while(!q.empty())
	{
		int temp=q.front();
		q.pop();
		ll up=temp+u;
		ll down=temp-d;
		if(up<=f&&!visited[up])
		{
			q.push(up);
			dis[up]=dis[temp]+1;
			visited[up]=true;
		}
		if(down>=1&&!visited[down])
		{
			q.push(down);
			dis[down]=dis[temp]+1;
			visited[down]=true;
		}
	}
	
}
int main()
{
	ll i,j,s,g;
	scanf("%lld%lld%lld%lld%lld",&f,&s,&g,&u,&d);
	dis[g]=-1;
	bfs(s,g);
	if(dis[g]!=-1)
	printf("%lld",dis[g]);
	else
	printf("use the stairs");
}
