#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef int ll;
int main()
{
	ll i,n,j,x;
	scanf("%d",&n);
	vector <ll> a,b,c,d,temp1,temp2;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		a.push_back(x);
		scanf("%d",&x);
		b.push_back(x);
		scanf("%d",&x);
		c.push_back(x);
		scanf("%d",&x);
		d.push_back(x);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			x=a[i]+b[j];
			temp1.push_back(x);
			x=-(c[i]+d[j]);
			temp2.push_back(x);
			
		}
	}
	x=0;
	sort(temp1.begin(),temp1.end());
	sort(temp2.begin(),temp2.end());
	vector <ll>::iterator it,lo,up,lo1,up1;
	it=temp1.begin();
	while(it!=temp1.end())
	{
		up=upper_bound(temp2.begin(),temp2.end(),*it);
 	 	lo=lower_bound(temp2.begin(),temp2.end(),*it);
  		up1=upper_bound(temp1.begin(),temp1.end(),*it);
  		lo1=lower_bound(temp1.begin(),temp1.end(),*it);
  		x+=(up1-lo1)*(up-lo);
  		it=up1;
	}
	printf("%d\n",x);
	
	
	
	
	
	
}
