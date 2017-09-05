#include <iostream>
using namespace std;
typedef long long int ll;
int main()
{
	int t_cases;
	scanf("%d",&t_cases);
	while(t_cases--)
	{
		ll i,a,b;
		scanf("%lld%lld",&a,&b);
		ll arr[a];
		for(i=0;i<a;i++)
		scanf("%lld",&arr[i]);
		ll sum,min_sum,st,max_st;
		min_sum=100000005;
		ll start =0;
		sum=st=max_st=0;
		for(i=0;i<a;i++)
		{
			sum=sum+arr[i];
			st++;
			if((max_st<st&&sum<=b)||(max_st==st&&min_sum>sum))
			{
				max_st=st;
				min_sum=sum;
			}
			while(sum>b)
			{
				sum=sum-arr[start];
				st=st-1;
				start++;
			}
			if((max_st<st&&sum<=b)||(max_st==st&&min_sum>sum))
			{
				max_st=st;
				min_sum=sum;
			}
			
		}
		printf("%lld %lld\n",min_sum,max_st);
	}
}
