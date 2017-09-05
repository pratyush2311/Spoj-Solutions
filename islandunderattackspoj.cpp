#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll row,col;
char arr[300][300];
bool visited[300][300];
ll men,shelter;
void bfs(pair <ll,ll> s)
{
	queue < pair<ll,ll> > q;
	q.push(s);
	visited[s.first][s.second]=true;
	pair <ll,ll> temp,temp2;
	men=shelter=0;
	while(!q.empty())
	{
		temp=q.front();
		q.pop();
		int t=arr[temp.first][temp.second]-'0';
		if(arr[temp.first][temp.second]=='H')
		men++;
		if(t>=1&&t<=9)
		{
			shelter+=t;
		}
		if(temp.first+1<=row&&!visited[temp.first+1][temp.second]&&arr[temp.first+1][temp.second]!='.')
		{
			temp2.first=temp.first+1;
			temp2.second=temp.second;
			q.push(temp2);
			visited[temp2.first][temp2.second]=true;
		}
		if(temp.first-1>=1&&!visited[temp.first-1][temp.second]&&arr[temp.first-1][temp.second]!='.')
		{
			temp2.first=temp.first-1;
			temp2.second=temp.second;
			q.push(temp2);
			visited[temp2.first][temp2.second]=true;
		}
		if(temp.second+1<=col&&!visited[temp.first][temp.second+1]&&arr[temp.first][temp.second+1]!='.')
		{
			temp2.first=temp.first;
			temp2.second=temp.second+1;
			q.push(temp2);
			visited[temp2.first][temp2.second]=true;
		}
		if(temp.second-1>=1&&!visited[temp.first][temp.second-1]&&arr[temp.first][temp.second-1]!='.')
		{
			temp2.first=temp.first;
			temp2.second=temp.second-1;
			q.push(temp2);
			visited[temp2.first][temp2.second]=true;
		}
	}
	
	
}
int main()
{
	ll t_cases,k=1;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		ll i,j;
		scanf("%lld%lld",&row,&col);
		for(i=1;i<=row;i++)
		{
			for(j=1;j<=col;j++)
			{
				cin>>arr[i][j];
				
			}
		}
		ll final_m=0,final_survived=0,dead=0;
		memset(visited,false,sizeof(visited));
		pair <ll,ll> s;
		for(i=1;i<=row;i++)
		{
			for(j=1;j<=col;j++)
			{
				if(!visited[i][j]&&arr[i][j]!='.')
				{
					s.first=i;
					s.second=j;
					bfs(s);
					dead=men-shelter;
					if(dead>(men/2))
					final_survived+=0;
					else if(men>shelter)
					final_survived+=shelter;
					else
					final_survived+=men;								
				}
			}
		}
//		ll survivors=0;
//		dead=final_m-final_survived;
//		if(dead>(final_m/2))
//		survivors=0;
//		else
//		survivors=final_survived;
		if(final_survived==0)
		cout<<"Case #"<<k<<": There is no survivor.";
		else if(final_survived==1)
		{
			cout<<"Case #"<<k<<": There is 1 survivor.";
			
		}
		else
		{
			cout<<"Case #"<<k<<": There are "<<final_survived<<" survivors.";
		}
		k++;
		
		
	}
	
}
