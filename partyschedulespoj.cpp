#include <iostream>
using namespace std;
typedef long long int ll;
ll maximum(ll a,ll b)
{
	if(a>=b)
	return a;
	else
	return b;
}
int main()
{
	while(true)
	{
		ll budget,parties,i,j;
		cin>>budget;
		cin>>parties;
		if(budget==0&&parties==0)
		break;
		ll weight[parties+1],values[parties+1];
		for(i=1;i<=parties;i++)
		{
			cin>>weight[i];
			cin>>values[i];
		}
		ll dp[110][510];
		for(i=0;i<=parties;i++)
		dp[i][0]=0;
		for(i=1;i<=parties;i++)
		{
			for(j=1;j<=budget;j++)
			{
				if(j<weight[i])
				dp[i][j]=dp[i-1][j];
				else
				{
					dp[i][j]=maximum(values[i]+dp[i-1][j-weight[i]],dp[i-1][j]);
				}
			}
			
		}
		ll max_value=dp[parties][budget];
		ll max_budget=0;
		for(j=1;j<=budget;j++)
		{
			if(dp[parties][j]==max_value)
			{
				max_budget=j;
				break;
				
			}
		}
		cout<<max_budget<<" "<<max_value<<endl;
	}
	
	
	
	
}
