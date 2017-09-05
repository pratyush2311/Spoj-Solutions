#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k;
	while(k=1)
	{
		int g,b;
		cin>>g>>b;
		if(g==-1&&b==-1)
		break;
		if(g==0)
		cout<<b;
		else if(b==0)
		cout<<g;
		else if(g==0&&b==0)
		cout<<1;
		else if(g>b)
		cout<<ceil(double(g)/(b+1));
		else if(b>g)
		cout<<ceil(double(b)/(g+1));
		else if(g==b)
		cout<<1;
		
		cout<<"\n";
		
		
		
		
		
		
		
	}
	
	
	
	
}
