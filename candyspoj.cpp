#include <iostream>
using namespace std;
int main()
{
	int i,k;
	int n_of_bags;
	for(i=0;i<1000;i++)
	{
		cin>>n_of_bags;
		if(n_of_bags==-1)
		break;
		int candies[n_of_bags];
		int s=0;
		for(k=0;k<n_of_bags;k++)
		{
			cin>>candies[k];
			s+=candies[k];		
		}
		if(s%n_of_bags==0)
		{
			int candy=s/n_of_bags;
			int temp;
			int twice_moves=0;
			for(k=0;k<n_of_bags;k++)
			{
				temp=candy-candies[k];
				if(temp>=0)
				twice_moves+=temp;
				else
				{
					temp*=-1;
					twice_moves+=temp;
				}
				
			}
			int moves=twice_moves/2;
			cout<<moves;
			cout<<"\n";
		}
		else
		{
			cout<<-1;
			cout<<"\n";
		}
		
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
}
