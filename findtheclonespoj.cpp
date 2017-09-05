#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	while(1)
	{
		ll a,b,i,j;
		cin>>a>>b;
		if(a==0&&b==0)
		break;
		map <string,int> m;
		m.clear();
		string s;
		for(i=0;i<a;i++)
		{
			cin>>s;
			m[s]++;
		}
		ll arr[a+1];
		memset(arr,0,sizeof(arr));
		map <string,int>::iterator it;
		for(it=m.begin();it!=m.end();it++)
		{
			arr[(*it).second]++;
		}
		for(i=1;i<=a;i++)
		cout<<arr[i]<<endl;
		
	}
}
