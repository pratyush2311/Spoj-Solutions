#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int t_cases;
	cin>>t_cases;
	while(t_cases--)
	{
		string s;
		cin>>s;
		string s2=s;
		std::reverse(s.begin(),s.end());
		if(s.compare(s2)==0)
		cout<<"YES";
		else
		cout<<"NO";
		cout<<"\n";
		
		
	}
	
	
	
	
}

