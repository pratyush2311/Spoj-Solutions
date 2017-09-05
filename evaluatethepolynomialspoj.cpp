#include <iostream>
using namespace std;
long long int value(long long int poly[],long long int n,long long int x)
{
	long long int result=poly[0];
	long long int i;
	for(i=1;i<n;i++)
	{
		result=result*x+poly[i];
	}
	return result;
	
}
int main()
{
	long long int i=1;
	while(1)
	{
		
		long long int n;
		cin>>n;
		if(n==-1)
		break;
		long long int poly[n+1],t;
		for(t=0;t<n+1;t++)
		{
			cin>>poly[t];
		}
		long long int values;
		cin>>values;
		cout<<"Case "<<i<<":"<<"\n";
		i++;
		while(values--)
		{
			long long int x;
			cin>>x;
			long long int result=value(poly,n+1,x);
			cout<<result<<"\n";
		}
		
	}
}
