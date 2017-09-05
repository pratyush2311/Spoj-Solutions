#include <iostream>
#include <string>
using namespace std;
long long int gcd(long long int a, long long int  b) {
  long long int r, i;
  while(b!=0){
   r = a % b;
    a = b;
    b = r;
  }
  return a;
}
long long int lcm(long long int a[],long long int k)
{
	long long int res=1,i;
	for(i=0;i<k;i++)
	{
		res=res*a[i]/gcd(res,a[i]);
	}
	return res;
}


int main()
{
	while(1)
	{
		string s;
		cin>>s;
		char c=s[0];
		long long int num[20],k;
		int temp[20],t;
		t=0;
		k=0;
		if(c=='*')
		break;
		int i;
		for(i=0;i<s.length();i++)
		{
			c=s[i];
			if(c=='Y')
			{
			num[k++]=i+1;
			}
			else
			temp[t++]=i+1;
			
		}
		long long int LCM=lcm(num,k);
		
		
		int flag=0;
		for(i=0;i<t;i++)
		{
			if(LCM%temp[i]==0)
			{
				flag=1;
				break;
			}
			
		}
		if(flag==1)
		cout<<-1<<"\n";
		else
		cout<<LCM<<"\n";
	
		
	}
	
	
	
	
	
	
}
