#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n,m;
char arr[400][400];
bool visited[400][400];
ll exitt,sheep,wolves;
void bfs(pair<ll,ll> s)
{
	visited[s.first][s.second]=true;
	queue < pair<ll,ll> > q;
	pair <ll,ll> temp,temp2;
	q.push(s);
	exitt=sheep=wolves=0;
	while(!q.empty())
	{
		temp=q.front();
		q.pop();
		if(temp.first==0||temp.first==(n-1)||temp.second==0||temp.second==(m-1))
		exitt=1;
		if(arr[temp.first][temp.second]=='k')
		sheep++;
		if(arr[temp.first][temp.second]=='v')
		wolves++;
		if(temp.first+1<n&&!visited[temp.first+1][temp.second]&&arr[temp.first+1][temp.second]!='#')
		{
			temp2.first=temp.first+1;
			temp2.second=temp.second;
			visited[temp.first+1][temp.second]=true;
			q.push(temp2);
		}
		if(temp.first-1>=0&&!visited[temp.first-1][temp.second]&&arr[temp.first-1][temp.second]!='#')
		{
			temp2.first=temp.first-1;
			temp2.second=temp.second;
			visited[temp.first-1][temp.second]=true;
			q.push(temp2);
		}
		if(temp.second+1<m&&!visited[temp.first][temp.second+1]&&arr[temp.first][temp.second+1]!='#')
		{
			temp2.first=temp.first;
			temp2.second=temp.second+1;
			visited[temp.first][temp.second+1]=true;
			q.push(temp2);
		}
		if(temp.second-1>=0&&!visited[temp.first][temp.second-1]&&arr[temp.first][temp.second-1]!='#')
		{
			temp2.first=temp.first;
			temp2.second=temp.second-1;
			visited[temp.first][temp.second-1]=true;
			q.push(temp2);
		}
		
		
	}
	
}
int main()
{
	cin>>n>>m;
	char d[500];
	ll i,j,k,x,y,sfinal=0,wfinal=0;
	for(i=0;i<n;i++)
	{
		scanf("%s",d);
		for(j=0;j<m;j++)
		{
			arr[i][j]=d[j];
		}
	}
	pair <ll,ll> s;
	memset(visited,false,sizeof(visited));
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(!visited[i][j]&&(arr[i][j]=='.'||arr[i][j]=='v'||arr[i][j]=='k'))
			{
				s.first=i;
				s.second=j;
				bfs(s);
				if(exitt==0)
				{
					if(sheep>wolves)
					sfinal+=sheep;
					else
					wfinal+=wolves;
//					cout<<sfinal<<" "<<wfinal<<endl;
				}
				
				
			}
		}
	}
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<m;j++)
//		{
//			cout<<visited[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	cout<<sfinal<<" "<<wfinal;
	
	
}
