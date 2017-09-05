#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <ll> arr(10000000);
int main()
{
	ll t_cases;
	cin>>t_cases;
	while(t_cases--)
	{
		ll i,n,j,x;
		cin>>n;
		vector <ll> time;
		ll late_exit=-1;
		for(i=0;i<n;i++)
		{
			cin>>x;
			time.push_back(x);
			arr[x]=1;
			cin>>x;
			time.push_back(x);
			arr[x]=-1;
		}
		sort(time.begin(),time.end());	
		ll max=-1;
		ll count=0;
		vector <ll>::iterator it;
		it=time.begin();
		for(it=time.begin();it<time.end();it++)
		{
			count+=arr[*it];
			if(count>max)
			max=count;
			arr[*it]=0;
		}

		arr.clear();		
		cout<<max<<endl;
	}
	
	
	
	
}
