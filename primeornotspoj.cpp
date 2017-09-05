//#include <iostream>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//typedef long long int ll;
//ll k,m,n;
//long long fastPower(long long base,long long power,long long M)
//{
//    if(power==0)
//       return 1;
//    if(power==1)
//    return base;
//    long long halfn=fastPower(base,power/2,M);
//    if(power%2==0)
//        return ( halfn * halfn ) % M;
//    else
//        return ( ( ( halfn * halfn ) % M ) * base ) % M;
//}
//void findKM()
//{
//	double temp=n-1;
//	ll i=1;
//	while(1)
//	{
//		temp=(n-1)%fastPower(2,i,10000007);
//		if(temp!=0)
//		{
//			break;
//		}
//		else
//		{
//			k=i;
//			i++;
//		}
//		
//	}
//	m=n/fastPower(2,k,10000009);
//	
//}
//bool isMillerRabinPrime(ll n)
//{
//	if(n==1)
//	return false;
//	if(n==2)
//	return true;
//	if(n%2==0)
//	return false;
//	else
//	{
//		findKM();
////		cout<<k<<" "<<m;
//		ll b;
//		ll a=2;
//		ll b_0=fastPower(a,m,n);
////		cout<<b_0<<endl;
//		b_0=b_0%n;
////		cout<<endl<<b_0;
//		ll temp=b_0;
//		if(b_0==1||b_0==-1||b_0==n-1)
//		return true;
//		else
//		{
//			for(int i=1;i<=k;i++)
//			{
//				
//				b=temp*temp%10000007;
//				b=b%n;
//				temp=b;
//				if(b==-1||b==n-1)
//				{
//					return true;
//					
//				}
//				else if(b==1)
//				{
//					return false;
//				}
//				
//			}
//		}
//	}
//	return false;
//}
//
//int main()
//{
//	ll t_cases;
//	scanf("%lld",&t_cases);
//	while(t_cases--)
//	{
//		scanf("%lld",&n);
//		if(isMillerRabinPrime(n))
//		printf("YES\n");
//		else
//		printf("NO\n");
//	}
//}
#include <cstdio>
#include <cstdlib>

using namespace std;

typedef unsigned long long ULL;

ULL mulmod(ULL a, ULL b, ULL c){
	ULL x = 0,y = a%c;
	
	while(b>0){
		if(b&1) x = (x+y)%c;
		y = (y<<1)%c;
		b >>= 1;
	}
	
	return x;
}

ULL pow(ULL a, ULL b, ULL c){
	ULL x = 1, y = a;
	
	while(b>0){
		if(b&1) x = mulmod(x,y,c);
		y = mulmod(y,y,c);
		b >>= 1;
	}
	
	return x;
}

bool miller_rabin(ULL p, int it){
	if(p<2) return false;
	if(p==2) return true;
	if((p&1)==0) return false;
	
	ULL s = p-1;
	while(s%2==0) s >>= 1;
	
	while(it--){
		ULL a = rand()%(p-1)+1,temp = s;
		ULL mod = pow(a,temp,p);
		
		if(mod==-1 || mod==1) continue;
		
		while(temp!=p-1 && mod!=p-1){
			mod = mulmod(mod,mod,p);
			temp <<= 1;
		}
		
		if(mod!=p-1) return false;
	}
	
	return true;
}

int main(){
	int T;
	unsigned long long N;
	scanf("%d",&T);
	
	while(T--){
		scanf("%llu",&N);
		printf("%s\n",miller_rabin(N,18)? "YES" : "NO");
	}
	
	return 0;
}
