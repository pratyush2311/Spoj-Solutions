#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <ll> v1,v2,v3;
void binarycalc()
{
	ll i,lb,ub,mid;
	for(i=0;i<v1.size();i++)
	{
		if(binary_search(v2.begin(),v2.end(),v1[i]))
		v3.push_back(v1[i]);
	}		
}
ll binaryindex(ll val,vector <ll> v)
{
	ll i,lb,ub,mid;
	lb=0;
	ub=v.size()-1;
	mid=floor((lb+ub)/2);
	while(lb<ub&&val!=v[mid])
	{
		if(val>v[mid])
		lb=mid+1;
		else if(val<v[mid])
		ub=mid-1;
		mid=floor((lb+ub)/2);
	}
	if(val==v[mid])
	return mid;	
}
ll calcsum(ll val1,ll val2,vector <ll> v )
{
	ll index=binaryindex(val1,v);
	ll temp=val1;
	ll sum=0;
	while(temp!=val2)
	{
		sum+=v[index++];
		temp=v[index];		
	}
	return sum;	
}
int main()
{
	while(true)
	{
		v1.clear();
		v2.clear();
		v3.clear();
		ll n2,n1,i,x,k;
		cin>>n1;
		if(n1==0)
		break;
		for(i=0;i<n1;i++)
		{
			scanf("%lld",&x);
			v1.push_back(x);	
		}
		v1.push_back(0);
		scanf("%lld",&n2);
		for(i=0;i<n2;i++)
		{
			scanf("%lld",&x);
			v2.push_back(x);
		}
		v2.push_back(0);
		ll sum1=0;
		ll sum2=0;
		binarycalc();
		if(v3.empty())
		{
			for(i=0;i<v1.size();i++)
			sum1+=v1[i];
			for(i=0;i<v2.size();i++)
			sum2+=v2[i];
			if(sum1>=sum2)
			cout<<sum1<<endl;
			else
			cout<<sum2<<endl;
			continue;			
		}
		else
		{
			ll sum_final=0;
			ll n_common=v3.size();
			sum1=calcsum(v1[0],v3[0],v1);
			sum2=calcsum(v2[0],v3[0],v2);
			if(sum1>=sum2)
			sum_final+=sum1;
			else
			sum_final+=sum2;
			for(i=0;i<n_common-1;i++)
			{
				sum1=calcsum(v3[i],v3[i+1],v1);
				sum2=calcsum(v3[i],v3[i+1],v2);
				if(sum1>=sum2)
				sum_final+=sum1;
				else
				sum_final+=sum2;
			}
			sum1=calcsum(v3[v3.size()-1],v1[v1.size()-1],v1);
			sum2=calcsum(v3[v3.size()-1],v2[v2.size()-1],v2);
			if(sum1>=sum2)
			sum_final+=sum1;
			else
			sum_final+=sum2;
			cout<<sum_final<<endl;
			continue;	
		}		
	}	
}
