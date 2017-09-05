#include <iostream>
using namespace std;
int main()
{
	int t_cases;
	cin>>t_cases;
	while(t_cases--)
	{
		long long int n,m;
		cin>>n>>m;
		if(n==m)
		{
			if(n%2==0)
			cout<<"L"<<"\n";
			else
			cout<<"R"<<"\n";
			
		}
		if(n>m)
		{
			if(m%2==0)
			cout<<"U"<<"\n";
			else
			cout<<"D"<<"\n";
			
		}
		if(n<m)
		{
			if(n%2==0)
			cout<<"L"<<"\n";
			else
			cout<<"R"<<"\n";
		}
		
	}
}
