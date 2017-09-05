#include<iostream>  
 #include<cstdio>  
 #include<algorithm>  
 #include<cstdlib>
 #include<cstring>    
 using namespace std;  
 int hash[10000000];  
 int main()  
 {  
      int t, n, i, a[103], count;  
      scanf("%d", &t);  
      while(t--)  
      {  
           count=0;  
           memset(hash, 0, sizeof(hash));  
           scanf("%d", &n);  
           for(i=0; i<n; i++)  
           {  
                scanf("%d", &a[i]);  
                hash[a[i]]+=1;  
           }  
           sort(a, a+n);  
           for(i=0; i<n; i++)  
           {  
                if(hash[a[i]]>0 && hash[2*a[i]]>0)  
                {  
                     hash[a[i]]--;  
                     hash[2*a[i]]--;  
                     count++;  
                }  
           }  
           printf("%d\n", count);  
      }  
      return 0;  
 }
