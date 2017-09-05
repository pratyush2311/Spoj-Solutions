//#include <iostream>
//using namespace std;
//int main()
//{
//	long long int a,b,c,d;
//	for(a=1;a<=100;a++)
//	{
//		for(b=1;b<=100;b++)
//		{
//			for(c=1;c<=100;c++)
//			{
//				for(d=1;d<=100;d++)
//				{
//					if(a*a*a==(b*b*b+c*c*c+d*d*d)&&(b<c&&c<d))
//					cout<<"Cube = "<<a<<", Triple = ("<<b<<","<<c<<","<<d<<")\n";
//				}
//			}
//		}
//	}
//}
#include <stdio.h>

int main()
{
	int a, b, c, d;
	for(a=6;a<=100;a++)
		for(b=2;b<a-2;b++)
			for(c=b+1;c<a-1;c++)
				for(d=c+1;d<a;d++)
					if(a*a*a==b*b*b+c*c*c+d*d*d)
						printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,d);
	return 0;
}
