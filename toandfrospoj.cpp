#include <iostream>
#include <string>
using namespace std;
int main()
{
	int columns;
	int t;
	for(t=0;t<1000;t++)
	{
	
		cin>>columns;
		if(columns==0)
		break;
		string message;
		cin>>message;
		int len=message.length();
		int rows=len/columns;
		char arr[rows][columns];
		int i,k;
		int g=0;
		i=0;
		while(i<rows)
		{
			for(k=0;k<columns;k++)
			{
				arr[i][k]=message[g];
				g++;
				if(g%columns==0)
				break;
			}
			i++;
			for(k=columns-1;k>=0;k--)
			{
				arr[i][k]=message[g];
				g++;
				if(g%columns==0)
				break;
			
			}
			i++;
		
		}
		for(i=0;i<columns;i++)
		{
			for(k=0;k<rows;k++)
			cout<<arr[k][i];
		}
		cout<<"\n";

	}


}
