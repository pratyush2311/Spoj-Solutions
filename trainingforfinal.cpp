#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll minimum(ll a,ll b)
{
	if(a<=b)
	return a;
	else return b;
}
int main()
{
	
	ll n,m,x,y,i,j;
	scanf("%lld%lld",&n,&m);
	scanf("%lld%lld",&x,&y);
	ll arr[40][40];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%lld",&arr[i][j]);
		}
	}
	for(i=x+2;i<=n;i++)
	arr[i][y]+=arr[i-1][y];
	for(i=y+2;i<=m;i++)
	arr[x][i]+=arr[x][i-1];
	for(i=x+1;i<=n;i++)
	{
		for(j=y+1;j<=m;j++)
		{
			arr[i][j]+=minimum(arr[i-1][j],arr[i][j-1]);
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		cout<<arr[i][j]<<" ";
		cout<<endl;
	}
	ll res=arr[x][y]-arr[n][m];
	if(res>=0)
	printf("Y %lld",res);
	else
	printf("N");
}
