#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t_cases;
	cin>>t_cases;
	int i;
	for(i=0;i<t_cases;i++)
	{
		cout<<"\n";
		int godz,mechgodz;
		cin>>godz>>mechgodz;
		int size1=godz;
		int size2=mechgodz;
		int god[size1];
		
		int mech[size2];
		int k;
		for(k=0;k<godz;k++)
			cin>>god[k];
		for(k=0;k<mechgodz;k++)
			cin>>mech[k];
		std::sort(god,god+size1);
		std::sort(mech,mech+size2);	
		if(god[godz-1]>mech[mechgodz-1])
		cout<<"Godzilla";
		else if(god[godz-1]<mech[mechgodz-1])
		cout<<"MechaGodzilla";
		else
		cout<<"Godzilla";
		
		
		
		
		 
		
		
		
	}
	
	
	
	
	
	
	
}
