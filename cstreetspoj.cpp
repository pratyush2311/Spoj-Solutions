#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct Tree
{
	Tree *parent;
	int rank;
	int value;
};
struct Edge
{
	Tree *from;
	Tree *to;
	int weight;
	
};
int n,m,cost;
vector <Tree*> trees;
vector <Edge*> edges;
Tree *makeset(int value)
{
	Tree *temp=new Tree[1];
	temp->parent=temp;
	temp->value=value;
	temp->rank=0;
	return temp;
}
Edge *makeedge(int from,int to,int weight)
{
	Edge *temp=new Edge[1];
	temp->from=trees[from];
	temp->to=trees[to];
	temp->weight=weight;
	return temp;
}
Tree *findset(Tree *node)
{
	if(node->parent!=node)
	{
		node->parent=findset(node->parent);
	}
	return node->parent;
}
void link(Tree *a,Tree *b)
{
	if(a->rank>b->rank)
	{
		b->parent=a;
	}
	else
	{
		a->parent=b;
		if(a->rank==b->rank)
		++b->rank;
	}
	
}
void unionset(Tree *a,Tree *b)
{
	link(findset(a),findset(b));
}
bool comparator(Edge *a,Edge *b)
{
	return a->weight<b->weight;
}
void build()
{
	sort(edges.begin(),edges.end(),comparator);
	int value=0;
	for(int i=0;i<edges.size();i++)
	{
		Tree * firstSet = findset(edges[i]->from);
        Tree * secondSet = findset(edges[i]->to);
        if (firstSet->value != secondSet->value)
        {
            unionset(firstSet, secondSet);
            value += edges[i]->weight;
        }	
	}
	printf("%d",value*cost);
}
int main()
{
	int t,i;
	scanf("%d",&t);
	trees.clear();
	edges.clear();
	for(i=0;i<t;i++)
	{
		scanf("%d%d%d",&cost,&n,&m);
		int a,b,c,j;
		for(j=0;j<n;j++)
		{
			trees.push_back(makeset(j));
		}
		for(j=0;j<m;j++)
		{
			scanf("%d%d%d",&a,&b,&c);
			edges.push_back(makeedge(a-1,b-1,c));
		}
		build();
	}
}
