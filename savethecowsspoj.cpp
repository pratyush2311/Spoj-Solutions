#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,k;
        cin >> n >> m >> k;
        bool ok = false;
        while(k--)
        {
            int x,y;
            cin >> x >> y;
            if( n-x <= 4 || x<=5 || y<=5 || m-y <= 4 ) ok = true;
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
