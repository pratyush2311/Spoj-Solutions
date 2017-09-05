#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int arr[200][200];
int new_arr[200][200];
vector < pair<int,int> > v;
int distances[40000];
int calculate(int i , int j,int size)
{
	int k;
	for(k=0;k<size;k++)
	{
		distances[k]=abs(i-v[k].first)+abs(j-v[k].second);
	}
	int min=1000000;
	for(k=0;k<size;k++)
	if(distances[k]<min)
	min=distances[k];
	return min;
}
int main()
{
	int t_cases;
	scanf("%d",&t_cases);
	while(t_cases--)
	{
		int n,m,i,j;
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
		{
		
			string s;
			cin>>s;
			for(j=0;j<m;j++)
			{
				arr[i][j]=s[j]-'0';
				if(arr[i][j]==1)
				{
					v.push_back(make_pair(i,j));
					new_arr[i][j]=0;
				}
			}
		}
		int size=v.size();
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(arr[i][j]==0)
				{
					new_arr[i][j]=calculate(i,j,size);
					
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%d ",new_arr[i][j]);
			}
			printf("\n");
		}
		
		
	}
}

