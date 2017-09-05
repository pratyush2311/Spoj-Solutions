#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n,m;
bool visited[1010][1010];
char arr[1010][1010];
ll dist[1010][1010];
void bfs(pair <ll,ll> s)
{
	pair <ll,ll> t1,t2;
	memset(visited,false,sizeof(visited));
	queue < pair<ll,ll> > q;
	q.push(s);
	visited[s.first][s.second]=true;
	dist[s.first][s.first]=0;
	while(!q.empty())
	{
		t1=q.front();
		q.pop();
		if(t1.first+1<=n&&!visited[t1.first+1][t1.second]&&arr[t1.first+1][t1.second]!='X')
		{
			t2.first=t1.first+1;
			t2.second=t1.second;
			visited[t2.first][t2.second]=true;
			q.push(t2);
			dist[t2.first][t2.second]=dist[t1.first][t1.second]+1;
		}
		if(t1.first-1>=1&&!visited[t1.first-1][t1.second]&&arr[t1.first-1][t1.second]!='X')
		{
			t2.first=t1.first-1;
			t2.second=t1.second;
			visited[t2.first][t2.second]=true;
			q.push(t2);
			dist[t2.first][t2.second]=dist[t1.first][t1.second]+1;
		}
		if(t1.second+1<=m&&!visited[t1.first][t1.second+1]&&arr[t1.first][t1.second+1]!='X')
		{
			t2.first=t1.first;
			t2.second=t1.second+1;
			visited[t2.first][t2.second]=true;
			q.push(t2);
			dist[t2.first][t2.second]=dist[t1.first][t1.second]+1;
		}
		if(t1.second-1>=1&&!visited[t1.first][t1.second-1]&&arr[t1.first][t1.second-1]!='X')
		{
			t2.first=t1.first;
			t2.second=t1.second-1;
			visited[t2.first][t2.second]=true;
			q.push(t2);
			dist[t2.first][t2.second]=dist[t1.first][t1.second]+1;
		}
		if(t1.first+1<=n&&t1.second+1<=m&&!visited[t1.first+1][t1.second+1]&&arr[t1.first+1][t1.second+1]!='X')
		{
			t2.first=t1.first+1;
			t2.second=t1.second+1;
			visited[t2.first][t2.second]=true;
			q.push(t2);
			dist[t2.first][t2.second]=dist[t1.first][t1.second]+1;
		}
		if(t1.first+1<=n&&t1.second-1>=1&&!visited[t1.first+1][t1.second-1]&&arr[t1.first+1][t1.second-1]!='X')
		{
			t2.first=t1.first+1;
			t2.second=t1.second-1;
			visited[t2.first][t2.second]=true;
			q.push(t2);
			dist[t2.first][t2.second]=dist[t1.first][t1.second]+1;
		}
		if(t1.first-1>=1&&t1.second+1<=m&&!visited[t1.first-1][t1.second+1]&&arr[t1.first-1][t1.second+1]!='X')
		{
			t2.first=t1.first-1;
			t2.second=t1.second+1;
			visited[t2.first][t2.second]=true;
			q.push(t2);
			dist[t2.first][t2.second]=dist[t1.first][t1.second]+1;
		}
		if(t1.first-1>=1&&t1.second-1>=1&&!visited[t1.first-1][t1.second-1]&&arr[t1.first-1][t1.second-1]!='X')
		{
			t2.first=t1.first-1;
			t2.second=t1.second-1;
			visited[t2.first][t2.second]=true;
			q.push(t2);
			dist[t2.first][t2.second]=dist[t1.first][t1.second]+1;
		}
		
	}
	
}
int main()
{
	ll t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		ll i,j;
		scanf("%lld%lld",&n,&m);
		pair <ll,ll> s,d;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				cin>>arr[i][j];
				if(arr[i][j]=='S')
				{
					s.first=i;
					s.second=j;
				}
				if(arr[i][j]=='F')
				{
					d.first=i;
					d.second=j;
				}
			}
		}
		dist[d.first][d.second]=-1;
		bfs(s);
		if(dist[d.first][d.second]!=-1)
		{
			printf("%lld\n",dist[d.first][d.second]-1);
		}
		else
		printf("-1\n");
	}
	
	
}
