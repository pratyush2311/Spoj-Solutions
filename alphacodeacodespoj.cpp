#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	while(1)
	{
		char s[5010];
		scanf("%s",s);
		if(s[0]=='0')
		break;
		ll n=strlen(s);
		unsigned long long int dp[5010];
		memset(dp,0,2010);
		dp[0]=1;
		ll num,i;
		for(i=1;i<n;i++)
		{
			num=(s[i-1]-'0')*10;
			num+=s[i]-'0';
			if(s[i]-'0')
			dp[i]=dp[i-1];
			if(num>=10&&num<=26)
			dp[i]+=dp[(i-2)<0?0:i-2];
			
		}
		cout<<dp[n-1]<<endl;
		
		
	}
}
