#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r,g,b;
    cin>>r>>g>>b;

    string c;
    cin>>c;

    if(c == "Blue")
    {
        cout<<min(r,g)<<endl;
    }
    else if(c == "Red") cout<<min(g,b)<<endl;
    else cout<<min(r,b)<<endl;

}