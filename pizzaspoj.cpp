#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double two5,seven5;
	int five0;
	two5=five0=seven5=0;
	while(n--)
	{
		int a;
		char c;
		int b;
		scanf("%d/%d",&a,&b);
		double i=(double)a/b;
	
		if(i==0.25)
		two5++;
		else if(i==0.75)
		seven5++;
		else if(i==0.50)
		five0++;
	}
	double count=0;
	double n1=floor(two5*0.25);
	int n2=floor(five0*.50);
	double n3=seven5;
	double result;
	double n1__=(two5*0.25)-n1;;
	double n2__=(five0*0.50)-n2;
	if(two5==seven5)
	{
		if(five0%2==0)
		result=n2+two5+1;
		else
		result=n2+two5+1+1;
		
	}
	else if(two5<seven5)
	{
		if(five0%2==0)
		result=n2+two5+(seven5-two5)+1;
		else
		result=n2+two5+(seven5-two5)+1+1;
		
	}
	else if(two5>seven5)
	{
		double temp=two5-seven5;
		double temp1;
		if(five0%2==1)
		{	
			if(temp>2)
			{
				temp=temp-2;
				result=seven5+n2+1+1;
				temp1=floor(temp*0.25);
				result+=temp1;
				temp=temp-temp1;
				if(temp>0)
				result++;
			}
			else
			{
				result=n2+seven5+1+1;
			}
			
		}
		else
		{
			result=n2+seven5+1;
			temp1=floor(temp*0.25);
			result+=temp1;
			temp=temp*0.25-temp1;
			if(temp>0)
			result++;
			
		}
		
		
	}

//	if(n1__==0.25&&n2__==0.50&&n3==0)
//	count++;
//	else if(n1__==0.25&&n2__==0.50&&n3!=0)
//	count++;
//	else if(n1__==0&&n2__==0.50&&n3!=0)
//	count++;
//	else if(n1__==0.75&&n2__==0.50&&n3!=0)
//	count++;
//	else if(n1__==0.75&&n2__==0.50&&n3==0)
//	count+=2;
//	else if(n1__==0.50&&n2__==0.50&&n3==0)
//	count++;
//	else if(n1__==0.50&&n2__==0.50&&n3!=0)
//	count++;
//	else if(n1__==0.50&&n2__==0&&n3!=0)
//	count++;
//	double res=n1+n2+n3+count+1;
//	cout<<res<<"\n";
cout<<result<<"\n";
	
}
