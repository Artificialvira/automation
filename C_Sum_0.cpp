#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

string find_sequence(int n, vector<pair<int, int>> &pairs) {
    long long sum_L = 0;
    long long sum_R = 0;
    for (const auto &p : pairs) {
        sum_L += p.first;
        sum_R += p.second;
    }
    
    if (0 < sum_L || 0 > sum_R) {
        return "No";
    }
    
    vector<int> result(n);
    for (int i = 0; i < n; ++i) {
        result[i] = pairs[i].first;
    }
    long long current_sum = sum_L;
    
    for (int i = 0; i < n; ++i) {
        if (current_sum == 0) {
            break;
        }
        
        int li = pairs[i].first;
        int ri = pairs[i].second;
        if (current_sum < 0) {
            int increase = min(ri - li, (int)(-current_sum));
            result[i] += increase;
            current_sum += increase;
        }
    }
    
    if (current_sum != 0) {
        return "No";
    }
    
    string output = "Yes\n";
    for (int i = 0; i < n; ++i) {
        output += to_string(result[i]) + " ";
    }
    return output;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> pairs(n);
    for (int i = 0; i < n; ++i) {
        cin >> pairs[i].first >> pairs[i].second;
    }
    
    cout << find_sequence(n, pairs) << endl;
    
    return 0;
}
