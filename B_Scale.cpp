#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> matrix(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        {
            string row;
            cin >> row;
            for(int j = 0; j < n; j++)
            {
                matrix[i][j] = row[j] - '0';
            }
        }

        int res = n / k;

        // Printing the sub-matrix
        for (int i = 0; i < res; i++)
        {
            for(int j = 0; j < res; j++)
            {
                cout << matrix[i * k][j * k];
            }
            cout << "\n";
        }
    }

    return 0;
}
