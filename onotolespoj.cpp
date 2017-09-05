#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	long long int n,i;
	scanf("%lld",&n);
	long long int pyani[n];
	for(i=0;i<n;i++)
	scanf("%lld",&pyani[i]);
	sort(pyani,pyani+n);
	int j;
	long long int temp;
	for(i=0;i<n-1;i+=2)
	{
	
		if(pyani[i]!=pyani[i+1])
		{
			temp=pyani[i];
			break;
		}
			if(i==n-3)
		{
			temp=pyani[i+2];
		}
	
	}
	printf("%lld",temp);
	
	
	
	
	
	
	
}
