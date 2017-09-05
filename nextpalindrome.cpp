#include <iostream>
#define ll long long int
using namespace std;
int main()
{
	int t_cases;
	cin>>t_cases;
	while(t_cases--)
	{
		string s;
		int flag=0;
		int flag2=0;
		cin>>s;
		char c;
		ll n=s.length();
		ll arr[n];
		ll i,k,t;
		int l=0;
		for(i=0;i<n;i++)
		{
			c=s[i];
			arr[i]=c-'0';
		}
		if(n%2==1)
		{
			for(i=0;i<n;i++)
			{
				if(arr[i]==9)
				continue;
				else
				{
					l=1;	
					break;
				}
			}
			if(l==0)
			{
				cout<<1;
				for(i=1;i<=n-1;i++)
				cout<<0;
				cout<<1<<endl;
				continue;
			}
			for(i=1;i<=n/2;i++)
			{
				if(arr[n/2-i]==arr[n/2+i])
				continue;
				else
				flag2=1;
			}
			if(flag2==0)
			{
				if(arr[n/2]!=9)
				{
					arr[n/2]++;
					for(i=0;i<n;i++)
					cout<<arr[i];
					cout<<endl;
					continue;
				}
				else
				{
					arr[n/2]=0;
					for(t=1;t<=n/2;t++)
					{
						if(arr[n/2-t]==9&&arr[n/2+t]==9)
						{
							arr[n/2-t]=0;
							arr[n/2+t]=0;
						}
						else
						{
							arr[n/2-t]++;
							break;
						}
					}
					ll m=1;
					for(t=n/2+1;t<n;t++)
					{
						arr[t]=arr[n/2-m];
						m++;
					}
					for(i=0;i<n;i++)
					cout<<arr[i];
					cout<<endl;
					continue;
					
				}
			}
			
			 
			for(i=0;i<n;i++)
			{
				if(arr[i]!=0)
				{
					flag=1;
					break;
				}
		}
			if(flag==0)
				arr[n/2]=1;
			else
			{
				for(k=1;k<=n/2;k++)
				{
					if(arr[n/2-k]==arr[n/2+k])
					continue;
					else if(arr[n/2-k]>arr[n/2+k])
					{
							ll m=1;
							for(t=n/2+1;t<n;t++)
							{
								arr[t]=arr[n/2-m];
								m++;
							}
							break;
					}
					else
					{
						if(arr[n/2]==9)
						{
							arr[n/2]=0;
							for(t=1;t<=n/2;t++)
							{
								if(arr[n/2-t]==9&&arr[n/2+t]==9)
								{
									arr[n/2-t]=0;
									arr[n/2+t]=0;
								}
								else
								{
									arr[n/2-t]++;
									break;
								}
							}
							ll m=1;
							for(t=n/2+1;t<n;t++)
							{
								arr[t]=arr[n/2-m];
								m++;
							}
							break;
						}
						else
						{
							arr[n/2]++;
							ll m=1;
							for(t=n/2+1;t<n;t++)
							{
								arr[t]=arr[n/2-m];
								m++;
							}
							break;
				}
						
		}
					
				}
			}
			
		}
		else
		{
			for(i=0;i<n;i++)
			{
				if(arr[i]!=0)
				{
					flag=1;
					break;
				}
			}
			for(i=0;i<n;i++)
			{
				if(arr[i]==9)
				continue;
				else
				{
					l=1;	
					break;
				}
			}
			if(l==0)
			{
				cout<<1;
				for(i=1;i<=n-1;i++)
				cout<<0;
				cout<<1<<endl;
				continue;
			}
			for(i=0;i<n/2;i++)
			{
				if(arr[i]==arr[n-1-i])
				flag2=0;
				else
				{
					flag2=1;
					break;
				}
				
			}
			if(flag2==0)
			{
				if(arr[n/2]!=9&&arr[n/2-1]!=9)
				{
					arr[n/2]++;
					arr[n/2-1]++;
					for(i=0;i<n;i++)
					cout<<arr[i];
					cout<<endl;
					continue;
				}
				else
				{
					arr[n/2]=0;
					arr[n/2-1]=0;
					for(i=0;i<n/2-1;i++)
					{
						if(arr[n/2-i-2]==9&&arr[n/2+i+1]==9)
						{
							arr[n/2-i-2]=0;
							arr[n/2+i+1]=0;
						}
						else
						{
							arr[n/2-i-2]++;
							break;
						}
					}
					for(i=0;i<n/2;i++)
					{
						arr[n/2+i]=arr[n/2-1-i];
					}
					for(i=0;i<n;i++)
					cout<<arr[i];
					cout<<endl;
					continue;
					
					
				}
			}
			if(flag==0)
			{
				arr[n/2]=1;
				arr[n/2-1]=1;
			}
			else if(flag==1)
			{
				for(i=0;i<n/2;i++)
				{
					if(arr[n/2-i-1]==arr[n/2+i])
					continue;
					else if(arr[n/2-i-1]>arr[n/2+i])
					{
						for(k=0;k<n/2;k++)
						{
							arr[n/2+k]=arr[n/2-1-k];
						}
						break;
						
					}
					else
					{
						if(arr[n/2]==9&&arr[n/2-1]==9)
						{
							arr[n/2]=0;
							arr[n/2-1]=0;
							for(k=0;k<n/2-1;k++)
							{
								if(arr[n/2-k-2]==9&&arr[n/2+k+1]==9)
								{
									arr[n/2-k-2]=0;
									arr[n/2+k+1]=0;
								}
								else
								{
									arr[n/2-k-2]++;
									break;
								}
							}
							for(k=0;k<n/2;k++)
							{
								arr[n/2+k]=arr[n/2-1-k];
							}
							break;
						}
						else
						{
							arr[n/2]++;
							arr[n/2-1]++;
							for(k=0;k<n/2;k++)
							{
								arr[n/2+k]=arr[n/2-1-k];
							}
							break;
							
						}	
					}					
				}
		}
	}
		for(i=0;i<n;i++)
		cout<<arr[i];
		cout<<endl;		
	}
}
