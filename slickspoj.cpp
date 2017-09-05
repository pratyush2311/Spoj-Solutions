#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n,m;
ll arr[500][500];
bool visited[500][500];
ll bfs(pair <ll,ll> s)
{
	queue < pair<ll,ll> > q;
	pair <ll,ll> temp,temp2;
	q.push(s);
	visited[s.first][s.second]=true;
	ll count=0;
	while(!q.empty())
	{
		temp=q.front();
		q.pop();
		count++;
		if(temp.first+1<n&&(arr[temp.first+1][temp.second]==1)&&(!visited[temp.first+1][temp.second]))
		{
			visited[temp.first+1][temp.second]=true;
			temp2.first=temp.first+1;
			temp2.second=temp.second;
			q.push(temp2);
		}
		if(temp.first-1>=0&&arr[temp.first-1][temp.second]==1&&(!visited[temp.first-1][temp.second]))
		{
			visited[temp.first-1][temp.second]=true;
			temp2.first=temp.first-1;
			temp2.second=temp.second;
			q.push(temp2);
		}
		if(temp.second+1<m&&arr[temp.first][temp.second+1]==1&&(!visited[temp.first][temp.second+1]))
		{
			visited[temp.first][temp.second+1]=true;
			temp2.first=temp.first;
			temp2.second=temp.second+1;
			q.push(temp2);
		}
		if(temp.second-1>=0&&arr[temp.first][temp.second-1]==1&&(!visited[temp.first][temp.second-1]))
		{
			visited[temp.first][temp.second-1]=true;
			temp2.first=temp.first;
			temp2.second=temp.second-1;
			q.push(temp2);
		}
		
		
	}
	return count;
}
int main()
{
	while(1)
	{
		scanf("%lld%lld",&n,&m);
		if(n==0&&m==0)
		break;
		memset(visited,false,sizeof(visited));
		map <ll,ll> ma;
		ll i,j;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%lld",&arr[i][j]);
			}
		}
		pair <ll,ll> s;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(!visited[i][j]&&arr[i][j]==1)
				{
					s.first=i;
					s.second=j;
					ll count=bfs(s);
					ma[count]++;
				}
			}
		}
		
//		cout<<endl<<endl;
//		for(i=0;i<n;i++)
//		{
//			for(j=0;j<m;j++)
//			cout<<visited[i][j]<<" ";
//			cout<<endl;
//		}
		map <ll,ll>::iterator it;
		ll k=0;
		for(it=ma.begin();it!=ma.end();it++)
		{
			k+=(*it).second;
		}
		
		for(it=ma.begin();it!=ma.end();it++)
		{
			cout<<(*it).first<<" "<<(*it).second<<endl;
		}
		
	}
	
}

