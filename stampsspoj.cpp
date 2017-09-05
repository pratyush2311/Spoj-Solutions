#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t_cases;
	int i;
	cin>>t_cases;
	for(i=0;i<t_cases;i++)
	{
		int stamps,frnds,k;
		cin>>stamps>>frnds;
		int size=frnds;
		int lend[size];
		for(k=0;k<size;k++)
		{
			cin>>lend[k];
		}
		std::sort(lend,lend+size);
		int s=0;
		int count=0;
		for(k=size-1;k>=0;k--)
		{
			s+=lend[k];
			count++;
			if(s>=stamps)
			{
				cout<<"Scenario #"<<i+1<<":";
				cout<<"\n";
				cout<<count;
				cout<<"\n";
				break;
			}
			
		}
		if(s<stamps)
		{
			cout<<"Scenario #"<<i+1<<":";
			cout<<"\n";
			cout<<"impossible";
			cout<<"\n";
			
		}
				
		
		
		
	}
	
	
	
	
}
