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
        vector<int> arr(n);
        for (int i=0;i<n;i++) cin>>arr[i];

        sort(arr.begin(),arr.end(),greater<int>());

        int mx = 0;
        bool flag = true;
        for(int i=0;i<n;i++) 
        {
            if(i%2 != 0 and mx>arr[i])
            {
                cout<<"YES"<<endl;flag = false;
                break;
            } 
            mx = arr[i];
        }

        if(flag)
        {
            if(n%2 == 0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }

    }
}