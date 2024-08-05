#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    string a,b,c;
    while(t)
    {
        // cout<<t;
        t = t-1;
        cin>>a>>b;
        c = a;
        a[0] = b[0];
        
        b[0] = c[0];
        cout<<a<<" "<<b<<endl;
        
    }
    return 0;
}