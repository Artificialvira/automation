#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int cnt = 0;

        if (n == 1) cout<<0<<endl;

        else if (n<=k) cout<<1<<endl;

        else{
            while(n > 1)
            {
                n -= (k-1);
                cnt+=1;
            }
            cout<<cnt<<endl;
        }

        
    }
}