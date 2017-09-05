#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define sc(a) scanf("%lld",&a);
int main()
{
	ll t_cases;
	sc(t_cases);
	while(t_cases--)
	{
		ll n,i,j,k,x;
		sc(n);
		vector <ll> arr(n),left(n),right(n),sum(n);
		for(i=0;i<n;i++)
		{
			sc(x);
			arr[i]=x;
			left[i]=1;
			right[i]=1;
		}
		for(i=1;i<n;i++)
		{
			for(j=0;j<i;j++)
			{
				if(arr[j]<arr[i]&&left[i]<left[j]+1)
				left[i]=left[j]+1;
			}
		}
		for(i=n-2;i>=0;i--)
		{
			for(j=n-1;j>i;j--)
			{
				if(arr[j]<arr[i]&&right[i]<right[j]+1)
				{
					right[i]=right[j]+1;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			sum[i]=left[i]+right[i]-1;
		}
		ll max=-1;
		for(i=0;i<n;i++)
		{
			if(sum[i]>max)
			max=sum[i];
			
		}
		printf("%lld\n",max);
		
		
		
	}
}
