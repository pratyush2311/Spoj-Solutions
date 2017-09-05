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
//		cout<<t1.first<<" "<<t1.second<<endl;
		if(t1.first-2>=0&&t1.second+1<8&&dist[t1.first-2][t1.second+1]>=(t1.first-2)*t1.first+(t1.second+1)*t1.second+dist[t1.first][t1.second])
		{
			t2.first=t1.first-2;
			t2.second=t1.second+1;
			q.push(t2);
			visited[t1.first-2][t1.second+1]=true;
			dist[t1.first-2][t1.second+1]=(t1.first-2)*t1.first+(t1.second+1)*t1.second+dist[t1.first][t1.second];
		}
		if(t1.first-2>=0&&t1.second-1>=0&&dist[t1.first-2][t1.second-1]>(t1.first-2)*t1.first+(t1.second-1)*t1.second+dist[t1.first][t1.second])
		{
			t2.first=t1.first-2;
			t2.second=t1.second-1;
			q.push(t2);
		
			visited[t1.first-2][t1.second-1]=true;
			dist[t1.first-2][t1.second-1]=(t1.first-2)*t1.first+(t1.second-1)*t1.second+dist[t1.first][t1.second];
		}
		if(t1.first+2<8&&t1.second+1<8&&dist[t1.first+2][t1.second+1]>(t1.first+2)*t1.first+(t1.second+1)*t1.second+dist[t1.first][t1.second])
		{
			t2.first=t1.first+2;
			t2.second=t1.second+1;
			q.push(t2);
			
			visited[t1.first+2][t1.second+1]=true;
			dist[t1.first+2][t1.second+1]=(t1.first+2)*t1.first+(t1.second+1)*t1.second+dist[t1.first][t1.second];
		}
		if(t1.first+2<8&&t1.second-1>=0&&dist[t1.first+2][t1.second-1]>(t1.first+2)*t1.first+(t1.second-1)*t1.second+dist[t1.first][t1.second])
		{
			t2.first=t1.first+2;
			t2.second=t1.second-1;
			q.push(t2);
			visited[t1.first+2][t1.second-1]=true;
			dist[t1.first+2][t1.second-1]=(t1.first+2)*t1.first+(t1.second-1)*t1.second+dist[t1.first][t1.second];
		}
		if(t1.first+1<8&&t1.second+2<8&&dist[t1.first+1][t1.second+2]>(t1.first+1)*t1.first+(t1.second+2)*t1.second+dist[t1.first][t1.second])
		{
			t2.first=t1.first+1;
			t2.second=t1.second+2;
			q.push(t2);
			visited[t1.first+1][t1.second+2]=true;
			dist[t1.first+1][t1.second+2]=(t1.first+1)*t1.first+(t1.second+2)*t1.second+dist[t1.first][t1.second];
		}
		if(t1.first-1>=0&&t1.second+2<8&&dist[t1.first-1][t1.second+2]>(t1.first-1)*t1.first+(t1.second+2)*t1.second+dist[t1.first][t1.second])
		{
			t2.first=t1.first-1;
			t2.second=t1.second+2;
			q.push(t2);
			visited[t1.first-1][t1.second+2]=true;
			dist[t1.first-1][t1.second+2]=(t1.first-1)*t1.first+(t1.second+2)*t1.second+dist[t1.first][t1.second];
		}
		if(t1.first-1>=0&&t1.second-2>=0&&dist[t1.first-1][t1.second-2]>(t1.first-1)*t1.first+(t1.second-2)*t1.second+dist[t1.first][t1.second])
		{
			t2.first=t1.first-1;
			t2.second=t1.second-2;
			q.push(t2);
			visited[t1.first-1][t1.second-2]=true;
			dist[t1.first-1][t1.second-2]=(t1.first-1)*t1.first+(t1.second-2)*t1.second+dist[t1.first][t1.second];
		}
		if(t1.first+1<8&&t1.second-2>=0&&dist[t1.first+1][t1.second-2]>(t1.first+1)*t1.first+(t1.second-2)*t1.second+dist[t1.first][t1.second])
		{
			t2.first=t1.first+1;
			t2.second=t1.second-2;
			q.push(t2);
			visited[t1.first+1][t1.second-2]=true;
			dist[t1.first+1][t1.second-2]=(t1.first+1)*t1.first+(t1.second-2)*t1.second+dist[t1.first][t1.second];
		}
		
		
		
	}
}
int main()
{
	ll a,b,c,e;
	while(scanf("%lld%lld%lld%lld",&a,&b,&c,&e)!=EOF)
	{
		ll i,j;
		pair < ll,ll> s,d;
		s.first=a;
		s.second=b;
		d.first=c;
		d.second=e;
		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			dist[i][j]=10000000000;
		}
		bfs(s,d);
		if(visited[d.first][d.second]==false)
		cout<<"-1\n";
		else
		cout<<dist[d.first][d.second]<<endl;

	
	}
}
