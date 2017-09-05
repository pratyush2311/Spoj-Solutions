
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
	int n_days;
	cin>>n_days;
	long long int s=0;
	multiset<int> s1;
	multiset<int>::iterator it1,it2;
	while(n_days--)
	{
		
		int n;
		cin>>n;
		int arr[n];
		int i;
		for(i=0;i<n;i++)
		cin>>arr[i];
		
		s1.insert(arr,arr+n);
		it1=s1.begin();
		it2=s1.end();
		it2--;
		s+=(*it2)-(*it1);
		s1.erase(it2);
		s1.erase(it1);
	}
	cout<<s;
}
