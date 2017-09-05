#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t_cases;
	cin>>t_cases;
	int i,k;
	for(i=0;i<t_cases;i++)
	{
		int n_of_pairs;
		cin>>n_of_pairs;
		const int size=n_of_pairs;
		int men[size];
		int women[size];
		for(k=0;k<size;k++)
		{
			cin>>men[k];
		}
		for(k=0;k<size;k++)
		{
			cin>>women[k];
		}
		std::sort(men,men+size);
		std::sort(women,women+size);
		
		
		int s=0;
		for(k=0;k<size;k++)
		{
			s+=men[k]*women[k];
		}
		cout<<s;
		cout<<"\n";
		
		
		
		
	}
	
	
	
	
	
	
	
	
}
