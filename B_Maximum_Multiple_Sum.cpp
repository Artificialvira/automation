#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        int sum,msum=0,b,c;
        for (int i=2;i<=a;i++)
        {
            b = i;
            sum = 0;
            while(b<=a)
            {
                sum+=b;
                b = b+i;
            }
            // cout<<sum<<endl;
            
            if (msum<sum)
            {
                c = i;
            }
            msum = max(msum,sum);

        }
        cout<<c<<endl;
    }
    return 0;
}