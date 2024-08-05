#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n; 
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i]; 
    }

    int totalSum = 0; 
    for (int i = 0; i < n; ++i) {
        totalSum += a[i];
    }

    long prefixSum = 0; 
    long div = 0; 
    int cnt = 0;

    for (int i = 0; i < n; ++i) {
        prefixSum += a[i]; 
        if (prefixSum%2 ==0)
        {
            // cout<<prefixSum<<" ";
            div = prefixSum/2;
            for (int j = 0;j<=i;j++)
            {
                if (div==a[j])
                {
                    // cout<<div<<" ";
                    cnt++;
                    break;
                }
            }
        }
              
        
    }

    cout << cnt << endl; 
    }
    return 0;
}
