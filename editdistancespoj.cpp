#include <iostream>
using namespace std;
long long int dp[2001][2001];
long long int min(long long int a,long long int b , long long int c)
{
	long long int result =a;
	if(b<result)
	result=b;
	if(c<result)
	result=c;
	return result;
}
int main()
{
	int t_cases;
	cin>>t_cases;
	while(t_cases--)
	{
		string a,b;
		cin>>a;
		cin>>b;
		int i,j;
		for(i=0;i<2001;i++)
		dp[0][i]=i;
		for(i=0;i<2001;i++)
		dp[i][0]=i;
		for(i=1;i<2001;i++)
		{
			for(j=1;j<2001;j++)
			{
				if(b[i-1]==a[j-1])
				dp[i][j]=dp[i-1][j-1];
				else
				{
					dp[i][j]=min(dp[i][j-1],dp[i-1][j-1],dp[i-1][j])+1;
				}
			}
		}
		int m=a.length();
		int n=b.length();
		
		
		cout<<dp[n][m]<<endl;
		
		
		
		
	}	
}
