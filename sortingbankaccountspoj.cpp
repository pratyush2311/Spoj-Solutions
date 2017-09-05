#include<map>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	long long int t_cases;
	map <string,int> acc;
	map <string,int>::iterator it=acc.begin();
	scanf("%lld",&t_cases);
	while(t_cases--)
	{
		acc.clear();
		long long int n;
		scanf("%lld",&n);
		cin.ignore();
		while(n--)
		{
			string s;
			getline(cin,s);
			if(acc.find(s)!=acc.end())
			acc[s]++;
			else
			acc[s]=1;			
		}
		for (it=acc.begin(); it!=acc.end(); ++it)
    		cout << it->first<<" "<< it->second<<endl;
    		
    	
			
			
	
	}
		
		
		
		
		
		
		
		
		
	
}
