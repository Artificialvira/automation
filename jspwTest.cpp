#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n;
    vector<int> a(n);
    
    // Taking input for the vector elements
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Sorting the vector
    sort(a.begin(), a.end());

    cin >> e;
    
    int l = 0, r = n - 1, m;
    bool found = false;
    
    // Binary search
    while(l <= r)
    {
        m = l + (r - l) / 2;
        if (a[m] == e)
        {
            cout << "Element Found! " << a[m] << endl;
            found = true;
            break;
        }
        else if (a[m] < e)
        {
            l = m + 1;
        }
        else 
        {
            r = m - 1;
        }
    }
    
    if (!found) {
        cout << "Element Not Found!" << endl;
    }

    return 0;
}
