#include <iostream>
using namespace std;
int main()
{
	int k=1;
	while(k)
	{
		int size;
		cin>>size;
		if(size==0)
		break;
		int a[size];
		int i;
		for(i=0;i<size;i++)
		cin>>a[i];
		int count=0;
		for(i=1;i<=size;i++)
		{
			if(a[i-1]==a[a[a[i-1]-1]-1])
			count++;
		}
		if(count==size)
		cout<<"ambiguous";
		else
		cout<<"not ambiguous";
		cout<<"\n";
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
}
