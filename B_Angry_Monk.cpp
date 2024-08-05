#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> lst(k);

        for (int i = 0; i<k;i++) cin>>lst[i];

        sort(lst.begin(),lst.end());
        int cnt = 0;

        for (int i=0; i<k-1;i++)
        {
            if(lst[i] != 1) cnt+= lst[i]-1;
            // else ;
        }

        int res = 0;
        res = accumulate(lst.begin(),lst.end()-1,0);
        res += cnt;
        cout<< res<<endl;

    }
}