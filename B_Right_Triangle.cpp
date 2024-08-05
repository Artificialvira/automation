#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double s1 = pow(x1 - x2, 2) + pow(y1 - y2, 2);
    double s2 = pow(x2 - x3, 2) + pow(y2 - y3, 2);
    double s3 = pow(x1 - x3, 2) + pow(y1 - y3, 2);

    bool yes = false;
    double hyp = max(s1, max(s2, s3));

    if (hyp == s1) {
        yes = (hyp == s2 + s3);
    } else if (hyp == s2) {
        yes = (hyp == s1 + s3);
    } else {
        yes = (hyp == s1 + s2);
    }

    if (yes) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
