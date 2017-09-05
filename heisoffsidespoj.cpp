#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	while(1)
	{
		int a,b,k,j;
		cin>>a>>b;
		if(a==0&&b==0)
		break;
		int att[a];
		int def[b];
		for(k=0;k<a;k++)
		cin>>att[k];
		for(k=0;k<b;k++)
		cin>>def[k];
		sort(att,att+a);
		int temp=0;
		for(k=0;k<b;k++)
		{
			if(def[k]<=att[0])
			temp++;
			
		}
		if(temp>=2)
		cout<<"N";
		else
		cout<<"Y";
		cout<<"\n";
	
	
		
	
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
}
