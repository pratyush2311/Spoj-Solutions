#include <iostream>
using namespace std;
int reverse(int num);
int main()
{
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int num1,num2,sum;
		cin>>num1>>num2;
		int num1_rev=reverse(num1);
		int num2_rev=reverse(num2);
		sum=num1_rev+num2_rev;
		int sum_reverse=reverse(sum);
		cout<<sum_reverse;
		cout<<"\n";
	}
}
int reverse(int num)
{
	int i,s=0;
	while(num>0)
	{
		i=num%10;
		num=num/10;
		s=s*10+i;
		
	}
	return s;
	
	
	
}
