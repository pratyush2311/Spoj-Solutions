#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool cube[10000001];
int res[10000001];
void sieve()
{
	memset(res,0,sizeof(res));
	memset(cube,true,sizeof(cube));
	int i;
	for(i=2;i*i*i<=1000000;i++)
	{
		if(cube[i]==true)
		{
			int k=i*i*i;
			for(int j=k;j<=1000000;j+=k)
			cube[j]=false;
		}
	}
	int count=1;
	for(i=1;i<=1000000;i++)
	{
		if(cube[i]==true)
		res[i]=count++;
		
	}
}
int main()
{
	sieve();
	int t_cases;
	scanf("%d",&t_cases);
	for(int i=1;i<=t_cases;i++)
	{
		int n;
		scanf("%d",&n);
		vector <int>::iterator it;
		if(cube[n]==true)
		{
			printf("Case %d: %d\n",i,res[n]);	
		}
		else
		printf("Case %d: Not Cube Free\n",i);
	}
}
