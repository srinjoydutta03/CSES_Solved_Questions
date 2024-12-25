#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    
    for(int k = 1; k <= n; k++) {
        long long total = ((long long)k * k * (k * k - 1)) / 2;  // Total ways to place 2 knights
        long long attacks = 4 * (k - 1) * (k - 2);  // Number of attack positions
        cout << total - attacks << "\n";
    }
    
    return 0;
}