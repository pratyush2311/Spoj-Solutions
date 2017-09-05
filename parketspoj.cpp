#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a1,a2;
	cin>>a1>>a2;
	int w,l;
	int w1=((a1+4)/2+sqrt(((a1+4)/2)*((a1+4)/2)-4*(a1+a2)))/2;
	int w2=((a1+4)/2-sqrt(((a1+4)/2)*((a1+4)/2)-4*(a1+a2)))/2;
	if(w1<=w2)
	w=w1;
	else
	w=w2;
	l=a1/2+2-w;
	if(w>l)
	cout<<w<<" "<<l;
	else if(w<l)
	cout<<l<<" "<<w;
	else
	cout<<w<<" "<<l;
	
	
}
