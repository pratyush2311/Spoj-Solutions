#include <iostream>
#include <set>
using namespace std;
int main()
{
	int n;
	cin>>n;
	set<int> fof;
	set<int>::iterator it;
	int i,k;
	for(i=0;i<n;i++)
	{
		int friend_id;
		int friends;
		cin>>friend_id>>friends;
		fof.insert(friend_id);
		int friend_list[friends];
		for(k=0;k<friends;k++)
		{
			cin>>friend_list[k];
			fof.insert(friend_list[k]);
		}
		
		
		
	}
	int size=fof.size()-n;
	cout<<size;
	
	
	
	
	
	
	
	
}
