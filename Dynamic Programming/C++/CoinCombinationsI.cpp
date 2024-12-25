#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9+7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, target;
    cin >> n >> target;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    vector<int> dp (target+1, 0);
    dp[0] = 1;

    for (int i = 1; i <= target; ++i) {
        for (auto coin : arr) {
            if (i - coin >= 0) {
                dp[i] = (dp[i] + dp[i - coin]) % MOD;
            }
        }
    }


    cout << dp[target] <<endl;

}
