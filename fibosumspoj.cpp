#include <iostream>
using namespace std;
void matmult(long long int a[2][2],long long int b[2][2],long long int c[2][2],long long int m)
{
	int i,j,k;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=0;
			for(k=0;k<2;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
				c[i][j]=c[i][j]%m;
			}
		}
	}
	
}
void matpow(long long int z[2][2],long long int n,long long int ans[2][2],long long int m)
{
	long long int temp[2][2];
	ans[0][0]=1;
	ans[0][1]=0;
	ans[1][0]=1;
	ans[1][1]=0;
	int i,j;
	while(n>0)
	{
		if(n&1)
		{
			matmult(ans,z,temp,m);
			for(i=0;i<2;i++)
				for(j=0;j<2;j++)
					ans[i][j]=temp[i][j];			
		}
		matmult(z,z,temp,m);
			for(i=0;i<2;i++)
				for(j=0;j<2;j++)
					z[i][j]=temp[i][j];
					
					
					
		n=n/2;			
	}
	
}
long long int findfib(long long int n,long long int m)
{
	long long int fib;																													
	if(n>2)
	{
		long long int z[2][2]={{1,1},{1,0}},res[2][2];
		matpow(z,n-2,res,m);
		fib=res[0][0]*1+res[0][1]*0;
	}
	else
	fib=n-1;
	return fib;
}
long long int sum(long long int n)
{
	return (findfib(n+2,1000000007)-1);
}
int main()
{
	int t_cases;
	cin>>t_cases;
	while(t_cases--)
	{
		long long int a,b;
		cin>>a>>b;
		long long sum1=(sum(b+1)-sum(a-1+1)+1000000007)%1000000007;
		cout<<sum1<<endl;
		
		
	}


	
}
