#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t_cases;
	scanf("%d",&t_cases);
	while(t_cases--)
	{
		int h,a;
		scanf("%d%d",&h,&a);
		int count=1;
		if(h==0||a==0)
		{
			printf("-1\n");
			continue;
		}
		h=h+3;
		a=a+2;

		while(1)
		{
			int temp1_h=h;
			int temp1_a=a;
			int temp2_h=h;
			int temp2_a=a;
			
			if(h-5>0&&a-10>0)
			{
				h=h-5;
				a=a-10;
				count++;
				a=a+2;
				h=h+3;
				count++;
			}
			else if(h-20>0&&a+5>0)
			{
				h=h-20;
				a=a+5;
				count++;
				a=a+2;
				h=h+3;
				count++;
			}
			else
			{
				break;
			}

			
		}
		printf("%d\n",count);
		
		
		
	}
}
