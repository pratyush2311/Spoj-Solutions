#include <bits/stdc++.h>
using namespace std;
int n,c;
int check(int dis,int positions[])
{
	int cows=1;
	int pos=positions[0];
	for(int i=1;i<n;i++)
	{
		if(positions[i]-pos>dis)
		{
			pos=positions[i];
			cows++;
			if(cows==c)
			return 1;
		}
	}
	return 0;
}
int dist(int positions[])
{
	int ini=0;
	int last=positions[n-1];
	int max=-1;
	while(last>ini)
	{
		int mid=(ini+last)/2;
		if(check(mid,positions)==1)
		{
			if(mid>max)
			max=mid;
			ini=mid+1;
		}
		else
		last=mid;
	}
	return max;
}
int main()
{
	int t_cases;
	cin>>t_cases;
	while(t_cases--)
	{
		int i;
		cin>>n>>c;
		int positions[n];
		for(i=0;i<n;i++)
		{
			cin>>positions[i];
		}
		sort(positions,positions+n);
		int k=dist(positions)+1;
		cout<<k<<"\n";
	
	}
}
