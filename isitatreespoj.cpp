#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int parent[100000000];
vector < pair<int,int> > graph;
void addedge(int u,int v)
{ 
	graph.push_back(make_pair(u,v));
}
int find_set(int i)
{
	if(i==parent[i])
	return i;
	else
	return find_set(parent[i]);
}
void union_set(int u,int v)
{
	parent[u]=parent[v];
}
bool find_cycle()
{
	int i,urep,vrep;
	for(i=0;i<graph.size();i++)
	{
		urep=find_set(graph[i].first);
		vrep=find_set(graph[i].second);
		if(urep!=vrep)
		{
			union_set(urep,vrep);
			
		}
		else if(urep==vrep)
		{
			return true;
			break;
		}
	}
	return false;
}
int main()
{
	graph.clear();
	int n ,m;
	int a,b;
	cin>>n>>m;
	int i;
	for(i=1;i<=n;i++)
	{
		parent[i]=i;
	}
	for(i=1;i<=m;i++)
	{
	
		cin>>a>>b;
		addedge(a,b);
	}
	if(m==(n-1)&&!find_cycle())
	cout<<"YES\n";
	else
	cout<<"NO\n";	
	
	
	
	
	
}
