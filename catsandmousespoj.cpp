#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct cordinate
{
	ll r,c;
}mouse,cat1,cat2;
int main()
{
	ll i,j,k,cases,row,col;
	
	scanf("%lld%lld%lld",&row,&col,&cases);
	while(cases--)
	{
		scanf("%lld%lld%lld%lld%lld%lld",&mouse.r,&mouse.c,&cat1.r,&cat1.c,&cat2.r,&cat2.c);
		int temp=0;
		if(cat2.r!=cat1.r&&cat1.c!=cat2.c)
		{
			ll temp1=abs(cat1.c-cat2.c);
			ll temp2=abs(cat1.r-cat2.r);
			temp=temp2/temp1;
		}
		if(temp==1)
		{
			if(abs(mouse.r-cat1.r)+abs(mouse.r-cat2.r)==abs(cat1.r-cat2.r))
			{
				if(abs(mouse.c-cat1.c)+abs(mouse.c-cat2.c)==abs(cat1.c-cat2.c))
				cout<<"NO"<<endl;
				else
				cout<<"YES"<<endl;
			}
			else
			cout<<"YES"<<endl;
		}
		else
		cout<<"YES"<<endl;
		
	}
}
