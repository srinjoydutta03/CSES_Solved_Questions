#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        long long y, x;
        cin >> y >> x;

        long long n = max(x, y);
        long long diag = n * n - (n - 1); // Value at (n, n)

        if (y > x) {
            // Moving vertically
            if (n % 2 == 0) {
                cout << diag + (y - x) << endl;
            } else {
                cout << diag - (y - x) << endl;
            }
        } else {
            // Moving horizontally
            if (n % 2 == 0) {
                cout << diag - (x - y) << endl;
            } else {
                cout << diag + (x - y) << endl;
            }
        }
    }

    return 0;
}
