#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
char arr[110][110];
ll dis[110][110],n,m;
bool visited[110][110];
void bfs(pair <ll,ll> car)
{
	queue < pair<ll,ll> > q;
	q.push(car);
	memset(visited,false,sizeof(visited));
	pair <ll,ll> t1,t2;
	visited[car.first][car.second]=true;
	dis[car.first][car.second]=0;
	while(!q.empty())
	{
		t1=q.front();
		q.pop();
		if(!visited[t1.first+1][t1.second]&&arr[t1.first+1][t1.second]!='#'&&t1.first+1<n)
		{
			t2.first=t1.first+1;
			t2.second=t1.second;
			q.push(t2);
			visited[t1.first+1][t1.second]=true;
			dis[t1.first+1][t1.second]=dis[t1.first][t1.second]+1;
		}
		if(!visited[t1.first-1][t1.second]&&arr[t1.first-1][t1.second]!='#'&&t1.first-1>=0)
		{
			t2.first=t1.first-1;
			t2.second=t1.second;
			q.push(t2);
			visited[t1.first-1][t1.second]=true;
			dis[t1.first-1][t1.second]=dis[t1.first][t1.second]+1;
		}
		if(!visited[t1.first][t1.second+1]&&arr[t1.first][t1.second+1]!='#'&&t1.second+1<m)
		{
			t2.first=t1.first;
			t2.second=t1.second+1;
			q.push(t2);
			visited[t1.first][t1.second+1]=true;
			dis[t1.first][t1.second+1]=dis[t1.first][t1.second]+1;
		}
		if(!visited[t1.first][t1.second-1]&&arr[t1.first][t1.second-1]!='#'&&t1.second-1>=0)
		{
			t2.first=t1.first;
			t2.second=t1.second-1;
			q.push(t2);
			visited[t1.first][t1.second-1]=true;
			dis[t1.first][t1.second-1]=dis[t1.first][t1.second]+1;
		}
		
	}
}
int main()
{
	ll t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		ll i,j,shops=0,times=0;
		pair <ll,ll> car;
		vector < pair<ll,ll> > v;
		v.clear();
		scanf("%lld%lld",&n,&m);
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>arr[i][j];
				if(arr[i][j]=='C')
				{
					car.first=i;
					car.second=j;
				}
				if(arr[i][j]=='S')
				{
					shops++;
					v.push_back(make_pair(i,j));
				}
			}
		}
		bfs(car);
		times+=shops*60;
		ll siz=v.size();
		ll k=-1;
		ll row,col;
		ll temp;
		for(i=0;i<siz;i++)
		{
			if(dis[v[i].first][v[i].second]>k)
			{
				k=dis[v[i].first][v[i].second];
				row=v[i].first;
				col=v[i].second;
				temp=i;
			}
		}
		times+=dis[row][col];
		for(i=0;i<siz;i++)
		{
			if(temp!=i)
			{
				times+=2*dis[v[i].first][v[i].second];
			}
		}
		printf("%lld\n",times);
		
		
	}
}
