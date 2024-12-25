#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    long long maxSum = arr[0], currSum = arr[0];
    for(int i = 1; i < n; i++){
        currSum = max((long long)arr[i], currSum + arr[i]);
        maxSum = max(maxSum, currSum);
    }

    cout << maxSum << "\n";

    return 0;
}