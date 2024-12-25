// C++
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long sum = (long long)n * (n + 1) / 2;
    if (sum % 2 != 0) {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";

    vector<int> set1, set2;
    long long s1 = 0, s2 = 0;
    for(int i = n; i >= 1; i--){
        if(s1 <= s2) { set1.push_back(i); s1 += i; }
        else         { set2.push_back(i); s2 += i; }
    }

    cout << set1.size() << "\n";
    for(int x : set1) cout << x << " ";
    cout << "\n" << set2.size() << "\n";
    for(int x : set2) cout << x << " ";
    cout << "\n";
    return 0;
}