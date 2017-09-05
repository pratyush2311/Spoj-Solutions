#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long int ll;
ll gcd(ll a, ll b) {
  if (b == 0) return a;
  return gcd(b, a%b);
}
int main()
{
	ll t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		ll a,b;
		scanf("%lld%lld",&a,&b);
		ll diff=abs(a-b);
		ll gc=gcd(abs(a),abs(b));
		ll res=diff/gc;
		printf("%lld\n",res);
	}
}
