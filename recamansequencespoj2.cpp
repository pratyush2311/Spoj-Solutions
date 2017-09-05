#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll arr[100000000];
ll seq[5000001];
void pre()
{
	ll i;	
	seq[0]=0;		
	arr[seq[0]]=1;
	for(i=1;i<=500000;i++)
	{
		ll temp=seq[i-1]-i;
		if(temp>0&&arr[temp]!=1)
		{
			seq[i]=temp;
			arr[seq[i]]=1;
		}
		else
		{
			seq[i]=seq[i-1]+i;
			arr[seq[i]]=1;
		}
		
		
			
	}
}
int main()
{
	
	memset(arr,0,sizeof(arr));
	pre();
	while(1)
	{
		ll k;
		scanf("%lld",&k);
		if(k==-1)
		break;
		ll result=seq[k];
		printf("%lld\n",result);
		
		
	}
	
	
	
	
	
}
