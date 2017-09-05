#include <bits/stdc++.h>
using namespace std;

int maximum(int a,int b)
{if(a>=b)
return a;
else 
return b;}
int main()
{
int t_cases;
cin>>t_cases;
while(t_cases--)
{
int dp[100][100],i,j;
		int rows;
		cin>>rows;
		for(i=0;i<rows;i++)
		{
			for(j=0;j<=i;j++)
			cin>>dp[i][j];
		}
		for(i=rows-2;i>=0;i--)
		{
			for(j=0;j<rows-1;j++)
			{
				dp[i][j]+=maximum(dp[i+1][j],dp[i+1][j+1]);
			}
		}
		printf("%lld\n",dp[0][0]);		
		
	}
}
