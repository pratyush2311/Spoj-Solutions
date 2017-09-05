#include <bits/stdc++.h>
using namespace std;
int add_arr[102];

void add(int *a,int *b)
{
	memset(add_arr,0,sizeof(add_arr));
	int i,res=0;
	int temp=0;
	for(i=101;i>=0;i--)
	{
		temp=a[i]+b[i]+res;
		add_arr[i]=temp%10;
		res=temp/10;
		if(temp==10)
		{
			add_arr[i]=0;
			res=1;
		}
		
		
		
	}	
}
int main()
{
	string s,d;
	cin>>s>>d;
	int t[102],y[102];
	memset(t,0,sizeof(t));
	memset(y,0,sizeof(y));
	int i;
	int temp=101;
	int temp2=101;
	for(i=s.length()-1;i>=0;i--)
	{
		char c=s[i];
		t[temp--]=c-'0';
	}
	for(i=d.length()-1;i>=0;i--)
	{
		char c=d[i];
		y[temp2--]=c-'0';
	}
	add(t,y);
	for(i=0;i<102;i++)
	cout<<t[i];
	cout<<"\n";
	for(i=0;i<102;i++)
	cout<<y[i];
	cout<<"\n";
	for(i=0;i<102;i++)
	cout<<add_arr[i];
	
}
