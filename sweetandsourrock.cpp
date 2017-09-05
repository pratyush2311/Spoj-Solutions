#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
char arr[250];
ll dp[250];
int main()
{
	ll t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		ll len,i,j,k;
		scanf("%lld",&len);
		for(i=0;i<len;i++)
		cin>>arr[i];
		memset(dp,0,sizeof(dp));
		if(arr[1]=='1')
		dp[0]=0;
		dp[1]=arr[0]-48;
		ll temp;
		for(i=2;i<=len;i++)
		{
			temp=0;
			dp[i]=dp[i-1];
			for(j=i;j>0;j--)
			{
				if(arr[j-1]=='1')
				temp++;
				else temp--;
				if(temp>0)
				dp[i]=max(dp[i],i-j+1+dp[j-1]);
				
			}
			
		}
		
//		for(i=1;i<=len;i++)
//		cout<<dp[i]<<" ";
//		cout<<endl;
		printf("%lld\n",dp[len]);
		
		
		
	}
}
