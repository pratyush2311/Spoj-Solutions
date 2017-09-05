#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll sumofdigits(ll n)
{
	if(n<10)
	return n*(n+1)/2;
	ll d=log10(n);
	// computing sum of digits from 1 to 10^d-1,
    // d=1 a[0]=0;
    // d=2 a[1]=sum of digit from 1 to 9 = 45
    // d=3 a[2]=sum of digit from 1 to 99 = a[1]*10 + 45*10^1 = 900
    // d=4 a[3]=sum of digit from 1 to 999 = a[2]*10 + 45*10^2 = 13500
    ll arr[d+1],i;
    arr[0]=0;
    arr[1]=45;
    for(i=2;i<=d;i++)
    	arr[i]=arr[i-1]*10+45*ceil(pow(10,i-1));
    ll p=ceil(pow(10,d));
    ll msd=n/p;
    return msd*arr[d]+msd*(msd-1)/2*p+msd*(1+n%p)+sumofdigits(n%p);
}
int main()
{
	while(1)
	{
		ll a,b;
		cin>>a>>b;
		if(a==-1&&b==-1)
		break;
		ll res=sumofdigits(b)-sumofdigits(a-1);
		cout<<res<<endl;
	}
}
