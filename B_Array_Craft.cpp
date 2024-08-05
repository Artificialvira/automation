#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        vector<int> a(n,1);
        int j = x;
        for (int i=0;i<(n-x)/2;i++) a[j++] = -1;

        if(y>(x-y))
        {
            for (int i = 0;i<(y)/2;i++) a[i] = -1;
        }
        else{
            int j = y;
            for (int i = 0;i<((x-y)/2);i++) a[j++] = -1;
        }

        for (int i : a) cout<<i<<" ";
        cout<<endl;

    }
}