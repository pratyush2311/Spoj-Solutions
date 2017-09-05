#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t_cases;
	cin>>t_cases;
	int i;
	string p1,p2,p3,p4,p5,p6,p7,p8;
	p1="TTT";
	p2="TTH";
	p3="THT";
	p4="THH";
	p5="HTT";
	p6="HTH";
	p7="HHT";
	p8="HHH";
	for(i=1;i<=t_cases;i++)
	{
		int c1,c2,c3,c4,c5,c6,c7,c8,k;
		c1=c2=c3=c4=c5=c6=c7=c8=0;
		int t_number;
		cin>>t_number;
		string str;
		cin>>str;
		string temp="";
		for(k=0;k<38;k++)
		{
			temp=str.substr(k,3);
			if(temp.compare(p1)==0)
			c1++;
			else if(temp.compare(p2)==0)
			c2++;
			else if(temp.compare(p3)==0)
			c3++;
			else if(temp.compare(p4)==0)
			c4++;
			else if(temp.compare(p5)==0)
			c5++;
			else if(temp.compare(p6)==0)
			c6++;
			else if(temp.compare(p7)==0)
			c7++;
			else if(temp.compare(p8)==0)
			c8++;
			
			
			
			
		}
		cout<<t_number<<" "<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<" "<<c5<<" "<<c6<<" "<<c7<<" "<<c8;
		cout<<"\n";
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
}
