#include <iostream>
#include <vector>
#include <vector>
using namespace std;
typedef long long int ll;
ll gcd(ll a, ll b) {
  if (b == 0) return a;
  return gcd(b, a%b);
}
int main()
{
	ll n,i,x;
	scanf("%lld",&n);
	vector <ll> tree;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&x);
		tree.push_back(x);
		
	}
	ll temp=tree[1]-tree[0];
	ll gc;
	for(i=1;i<n-1;i++)
	{
		ll h=tree[i+1]-tree[i];
		gc=gcd(h,temp);
		temp=gc;
	}
	ll s=0;
	for(i=0;i<n-1;i++)
	{
		s+=(tree[i+1]-tree[i])/gc-1;
		
		
	}
	printf("%lld\n",s);
	tree.clear();
}
