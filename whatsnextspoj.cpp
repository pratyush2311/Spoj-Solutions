#include <iostream>
using namespace std;
int main()
{
	int arr[1000][3];
	int i,j;
	for(i=0;i<100;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
		count++;
		if(arr[i][0]==0&&arr[i][1]==0&&arr[i][2]==0)
		break;
		if(arr[i][1]*arr[i][1]==arr[i][0]*arr[i][2])
		{
			int next_num=arr[i][2]*(arr[i][2]/arr[i][1]);
			cout<<"GP "<<next_num;
			cout<<"\n";
			
			
		}
		else if((2*arr[i][1])==((arr[i][0]+arr[i][2])))
		{
			
			int next_num=arr[i][2]+(arr[i][2]-arr[i][1]);
			cout<<"AP "<<next_num;
			cout<<"\n";		
		}
		
		
	}
	
	
	
	
}
