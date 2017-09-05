#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	while(1)
	{
		int i,j,x,n;
		scanf("%d",&n);
		if(n==0)
		break;
		vector <int> num;
		num.clear();
		for(i=0;i<n;i++)
		{
			scanf("%d",&x);
			num.push_back(x);
		}
		sort(num.begin(),num.end());
		int res=0;
		for(i=n-1;i>=2;i--)
		{
			int first=0;
			int end=n-1;
			while(first<end)
			{
				if(num[first]+num[end]<num[i])
				{
					res+=end-first;
					first++;
				}
				else
				{
					end--;
				}
			}
			
		}
		printf("%d\n",res);
		
	
	}
		
}
