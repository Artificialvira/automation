#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int rem = 0; int cow = 0;
        if(n>=4) 
        {
            cow = n/4;
            rem = n%4;
        }
        else rem = n;
        int hen = rem/2;

        cout<<cow+hen<<endl;
    }
}