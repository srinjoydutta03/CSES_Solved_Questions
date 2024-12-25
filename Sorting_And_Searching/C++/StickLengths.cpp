#include <iostream>
#include <algorithm>
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

    sort(arr.begin(), arr.end());

    if(n % 2 == 0){
        int median1 = arr[n/2];
        int median2 = arr[n/2 - 1];

        long long sum1 = 0, sum2 = 0;

        for(int i = 0; i < n; i++){
            sum1 += abs((long long)(arr[i] - median1));
            sum2 += abs((long long)(arr[i] - median2));
        }

        cout << min(sum1, sum2) << endl;
    }
    else{
        int median = arr[n/2];
        long long sum = 0;

        for(int i = 0; i < n; i++){
            sum += abs((long long)(arr[i] - median));
        }

        cout << sum << endl;
    }

    return 0;
}