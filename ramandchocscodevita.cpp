#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n_box;
	cin>>n_box;
	int choc[n_box];
	int temp[n_box];
	int i;
	int s=0;
	int diff=0;
	int two_turns=0;
	int turns;
	for(i=0;i<n_box;i++)
	{
		cin>>choc[i];
		s+=choc[i];
	}
	std::sort(choc,choc+n_box);
	if(n_box%2==1)
		{
			if(s%n_box!=0)
			cout<<"No";
			else
			{
				
				int mid_value=s/n_box;
				temp[n_box/2]=mid_value;
				for(i=n_box/2-1;i>=0;i--)
				{
					temp[i]=temp[i+1]-3;
				}
				for(i=n_box/2;i<n_box-1;i++)
				{
					temp[i+1]=temp[i]+3;
				}
				
				
				for(i=0;i<n_box;i++)
				{
					diff=temp[i]-choc[i];
					if(diff>=0)
					two_turns+=diff;
					else
					two_turns+=-1*diff;
					
					
					
				}
				if(two_turns%2==0)
				turns=two_turns/2;
				else
				turns=two_turns/2+1;
				
				cout<<"YES"<<" "<<turns;
				
				
				
				
			}
		
		}
	else
	{
		if(s%n_box==0||s<n_box*n_box)
		cout<<"No";
		else
		{
			int mid_value=s/n_box-1;
			temp[n_box/2-1]=mid_value;
				for(i=n_box/2-2;i>=0;i--)
				{
					temp[i]=temp[i+1]-3;
				}
				for(i=n_box/2-1;i<n_box-1;i++)
				{
					temp[i+1]=temp[i]+3;
				}
				
				for(i=0;i<n_box;i++)
				{
					diff=temp[i]-choc[i];
					if(diff>=0)
					two_turns+=diff;
					else
					two_turns+=-1*diff;
					
					
					
				}
				if(two_turns%2==0)
				turns=two_turns/2;
				else
				turns=two_turns/2+1;
				
				cout<<"YES"<<" "<<turns;
			
			
			
			
		}
		
		
	}	
	
	
	
	
	
	
	
}
