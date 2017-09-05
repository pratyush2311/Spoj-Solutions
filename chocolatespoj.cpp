#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int ll;
vector <ll> x,y;
int main()
{
	ll t_cases;
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		ll m,n,inp,temp,i,temp1,temp2;
		scanf("%lld%lld",&m,&n);
		temp=m-1+n-1;
		m--;
		n--;
		while(m--)
		{
			scanf("%lld",&inp);
			x.push_back(inp);
		}
		sort(x.begin(),x.end());
		while(n--)
		{
			scanf("%lld",&inp);
			y.push_back(inp);
		}
		sort(y.begin(),y.end());
		ll it_m,it_n;
		it_m=x.size()-1;
		it_n=y.size()-1;
		
		ll res=0;
		ll count_m,count_n;
		count_m=count_n=1;
		ll flag_m,flag_n;
		flag_m=flag_n=0;
		for(i=1;i<=temp;i++)
		{
			temp1=x[it_m];
			temp2=y[it_n];
			if(temp1>=temp2)
			{
				it_m--;
				count_n++;
				res+=temp1*count_m;
				if(it_m<0)
				{
					flag_m=1;
					break;
				}
				
			}
			else
			{
				it_n--;
				count_m++;
				res+=temp2*count_n;
				if(it_n<0)
				{
					flag_n=1;
					break;
				}
			}
		}
		if(flag_m==1)
		{
			for(i=it_n;i>=0;i--)
			{
				res+=y[i]*count_n;
			}	
		}
		else
		{
			for(i=it_m;i>=0;i--)
			{
				res+=x[i]*count_m;
			}	
			
		}
		printf("%lld\n",res);
		x.clear();
		y.clear();
		
	}
	
}
