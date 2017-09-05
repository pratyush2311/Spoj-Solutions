#include <iostream>
using namespace std;
int main()
{
int num[100];
int i=0,c=0;
	for(i=0;i<100;i++)
	{
			cin>>num[i];
			c++;
			if(num[i]==42)
			break;
	}
	for(i=0;i<c-1;i++)
	{
		cout<<num[i]<<"\n";
	}


}

