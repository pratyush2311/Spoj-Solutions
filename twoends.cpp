#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define sc(a) scanf("%lld",&a)
#define pr(a) printf("%lld",a)
ll dp[1010][1010];
ll arr[1010];
ll minimum(ll a,ll b)
{
	if(a<=b)
	return a;
	else return b;
}
ll maximum(ll a,ll b)
{
	if(a>=b)
	return a;
	else
	return b;
}
ll calcgame(ll i,ll j)
{
	if(i>j)
	return 0;
	if(dp[i][j]!=-1)
	return dp[i][j];
	if(i==j)
	return dp[i][j] =arr[i];
//	if((i+1)==j)
//	return maximum(arr[i],arr[j]);
	else
	{
//	return dp[i][j]=maximum(arr[i]+minimum(calcgame(i+1,j-1),calcgame(i+2,j)),arr[j]+minimum(calcgame(i,j-2),calcgame(i+1,j-1)+));
	return dp[i][j]=	max(arr[i+1]>=arr[j]?calcgame(i+2,j)+arr[i]:calcgame(i+1,j-1)+arr[i],arr[i]>=arr[j-1]?calcgame(i+1,j-1)+arr[j]:calcgame(i,j-2)+arr[j]);
}	
}
int main()
{
	ll k=1;
	while(1)
	{
		ll n,i,j;
		sc(n);
		if(n==0)
		break;
		ll sum=0;
		for(i=0;i<n;i++)
		{
			sc(arr[i]);
			sum+=arr[i];
		}
		for(i=0;i<1010;i++)
		for(j=0;j<1010;j++)
		dp[i][j]=-1;
		ll dp_sol=calcgame(0,n-1);
		ll greedy=sum-dp_sol;
		ll res=dp_sol-greedy;
		cout<<"In game "<<k<<", the greedy strategy might lose by as many as "<<res<<" points."<<endl;
		k++;
		
		
	}
}
