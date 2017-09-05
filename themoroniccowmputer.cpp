#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long int ll;
int main()
{
	ll i,n;
	scanf("%lld",&n);
	vector <ll> num;
	num.clear();
	ll temp,rem,quot;
	temp=n;
	if(n==0)
	printf("0");
	else
	{
		while(temp!=0)
		{
			if(temp<0&&temp%2==-1)
			{
				num.insert(num.begin(),1);
				temp=temp-1;
				temp=temp/-2;
			}
			else
			{
				rem=abs(temp%-2);
				temp=temp/-2;
				num.insert(num.begin(),rem);
			}
		
		}
	for(i=0;i<num.size();i++)
	printf("%lld",num[i]);
	}
	
}
