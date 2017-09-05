#include <iostream>
using namespace std;
int main()
{
	int t_cases;
	cin>>t_cases;
	while(t_cases--)
	{
		int m1,m2,i,j;
		int g=0;
		scanf("%d",&m1);
		long int mount1[m1],d;
		for(i=0;i<m1;i++)
		scanf("%ld",&mount1[i]);
		scanf("%ld",&m2);
		long int mount2[m2];
		for(i=0;i<m2;i++)
		scanf("%ld",&mount2[i]);
		int diff=1000000;
		for(i=0;i<m1;i++)
		{
			for(j=0;j<m2;j++)
			{
			if(mount1[i]>mount2[j])
			d=mount1[i]-mount2[j];
			else
			d=mount2[j]-mount1[i];
			if(d<diff)
			diff=d;
			}
		
		}
		cout<<diff<<"\n";
	
		
		
		
		
	
		
		
	}
	
	
	
	
}
