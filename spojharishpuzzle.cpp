#include <bits/stdc++.h>
using namespace std;
typedef int ll;
char arr[8][8];
int main()
{
	ll t_cases;
	scanf("%d",&t_cases);
	while(t_cases--)
	{
		vector < pair<ll,ll> > v;
		ll i,j;
		v.clear();
		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{
				cin>>arr[i][j];
				if(arr[i][j]=='R')
				v.push_back(make_pair(i,j));
			}
			
		}
		ll row[8];
		ll col[8];
		memset(row,0,sizeof(row));
		memset(col,0,sizeof(col));
		ll n=v.size();
		for(i=0;i<n;i++)
		{
			row[v[i].first]++;
			col[v[i].second]++;
		}
		ll flag=0;
		for(i=0;i<8;i++)
		{
			if(row[i]!=1||col[i]!=1)
			{
				flag=1;
				break;
			}
		}
//		for(i=0;i<n;i++)
//		{
//			cout<<row[i]<<" ";
//		}
//		cout<<endl;
//		for(i=0;i<n;i++)
//		{
//			cout<<col[i]<<" ";
//		}
//		cout<<endl;
		if(flag==1)
		printf("NO\n");
		else
		printf("YES\n");
	}
}
