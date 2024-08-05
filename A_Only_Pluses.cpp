#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int a = 5;
        while(a--)
        {
            if(x<y and x<z) x++;
            else if (y<z) y++;
            else z++;
        }
        cout<<x*y*z<<endl;
    }
}