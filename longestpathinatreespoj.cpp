#include <vector>
#include <queue>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define MAX 10000
vector <int> g[MAX+1];
int maxwt[MAX+1];
bool check[MAX+1];
void bfs(int n)
{
	queue < pair<int,int> > q;
	q.push(make_pair(n,0));
	while(!q.empty())
	{
		int root=q.front().first;
		int wt=q.front().second;
		check[root]=true;
		for(int i=0;i<g[root].size();i++)
		{
			if(!check[g[root][i]])
			{
				q.push(make_pair(g[root][i],wt+1));
			}
		}
		maxwt[root]=wt;
		q.pop();
	}
}
int main()
{
	int n,a,b;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	bfs(1);
	int maxroot=0;
	for(int i=1;i<=n;i++)
	{
		maxroot=maxwt[maxroot]<maxwt[i]?i:maxroot;
	}
	memset(maxwt,0,sizeof(maxwt));
	memset(check,0,sizeof(check));
	bfs(maxroot);
	maxroot=0;
	for(int i=1;i<=n;i++)
	{
		maxroot=max(maxroot,maxwt[i]);
	}
	cout<<maxroot<<endl;
}

