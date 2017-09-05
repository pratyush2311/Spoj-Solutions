#include <map>
#include <iostream>
using namespace std;
map<long long int,long long int> mp;
long long int sum(long long int n)
{
	if(n==0)
	return 0;
	if(mp[n]>0)
	return mp[n];
	if(n/2+n/3+n/4>=n)
	mp[n]=sum(n/2)+sum(n/3)+sum(n/4);
	else
	mp[n]=n;
	return mp[n];
	
}
int main ()
{
	long long int n;
	while(scanf("%lld",&n)!=EOF)
	{
	cout<<sum(n)<<"\n";
	}
}
