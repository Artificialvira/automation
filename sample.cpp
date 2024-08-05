#include <bits/stdc++.h>

using namespace std;
void subarrays(vector<int> sam)
{
    vector<vector<int>> res;
    int i=0,j=0,n;
    n = sam.size();
    while(i<n-1)
    {
        j=0;
        while(j<n-1)
        {
            res.push_back(sam[i:j]);
            j++;
        }
        i++;
    }
    cout<<res;
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0;i < n;i++)
    {
        int b;
        cin>>b;
        a.push_back(b);
    }
    subarrays(a);
    return 0;
}