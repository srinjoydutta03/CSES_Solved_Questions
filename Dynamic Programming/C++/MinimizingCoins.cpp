#include <iostream>
#include <vector>
using namespace std;

const int INF = 1e9+7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    vector<int> dp (x+1, INF);
    dp[0] = 0;

    for(auto coin : arr){
        for(int i = coin; i <= x; i++){
            if(i - coin >= 0){
                dp[i] = min(dp[i], dp[i-coin] + 1);
            }
        }
    }

    if (dp[x] == INF) {
        cout << -1 << endl;
    } else {
        cout << dp[x] << endl;
    }

}
