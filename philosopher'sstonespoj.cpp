#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll great(ll a,ll b , ll c)
{
	ll result =a;
	if(b>result)
	result=b;
	if(c>result)
	result=c;
	return result;
}
ll great2(ll a,ll b)
{
	if(a>=b)
	return a;
	else
	return b;
}
int main()
{
	int t_cases;
	cin>>t_cases;
	while(t_cases--)
	{	ll big=-1;
		ll rows,col;
		cin>>rows>>col;
		ll arr[rows][col];
		ll i,j;
		for(i=0;i<rows;i++)
		{
			for(j=0;j<col;j++)
			{
				cin>>arr[i][j];
			}
		}
		for(i=1;i<rows;i++)
		{
			for(j=0;j<col;j++)
			{
				
				if(j==0)
				{
					arr[i][j]+=great2(arr[i-1][j],arr[i-1][j+1]);
				}
				else if(j==(col-1))
				{
					arr[i][j]+=great2(arr[i-1][j],arr[i-1][j-1]);
				}
				else
				{
					arr[i][j]+=great(arr[i-1][j],arr[i-1][j-1],arr[i-1][j+1]);
				}
				
				
			}
		}
		for(j=0;j<col;j++)
		{
			if(arr[rows-1][j]>big)
			big=arr[rows-1][j];
		}
		cout<<big<<endl;
		
		
	}	
}
