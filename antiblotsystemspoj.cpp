#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{
	int t_cases,i,j;
	cin>>t_cases;
	cout<<"\n";
	for(i=0;i<t_cases;i++)
	{
		string s1,s2,s3;
		cin>>s1;
  		getchar();
  		getchar();
  		cin>>s2;
  		getchar();
  		getchar();
  		cin>>s3;
  		getchar();
		long int l1,l2,l3,output;
		l1=s1.length();
		l2=s2.length();
		l3=s3.length();
		int flag;
		for(j=0;j<l1;j++)
		{
			if(s1[j]=='m')
			flag=1;
		}
		for(j=0;j<l2;j++)
		{
			if(s2[j]=='m')
			flag=2;
			
		}
		for(j=0;j<l1;j++)
		{
			if(s3[j]=='m')
			flag=3;
			
		}
		if(flag==1)
		{
		output=atol(s3.c_str())-atol(s2.c_str());
		cout<<output<<" + "<<s2<<" = "<<s3;
		}	
		else if(flag==2)
		{
		output=atol(s3.c_str())-atol(s1.c_str());
		cout<<s1<<" + "<<output<<" = "<<s3;
		}
		else if(flag==3)
		{
			output=atol(s2.c_str())+atol(s1.c_str());
			cout<<s1<<" + "<<s2<<" = "<<output;
			
		}		
		cout<<"\n";
		
		
		
		
	}
	
	
	
	
	
	
	
	
}
