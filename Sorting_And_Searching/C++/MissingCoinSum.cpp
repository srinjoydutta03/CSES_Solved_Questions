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

    // Key idea: if you take a coin and add the next coin, you can make upto sum 1 to k, and the next unsolved should be k + 1
    // now if the next coin taken is greater than k + 1, you cannot make the sum k + 1

    /*
        For example, for an array [1, 2, 4]
        
        Take the first coin -> sum you can make is [1, 1], next min sum to check = 1 + 1 = 2
        Take the next coin -> 2 <= 2; sums you can make is [1, 3 (1+2)], next min = 3 + 1 = 4
        Take the next coin -> 4 <= 4; sums you can make is [1, 7], next min = 8


        Sum to make, subset of the array

        1               {1}
        2               {2}
        3               {1, 2}
        4               {4}
        5               {1, 4}
        6               {2, 4}
        7               {1, 2, 4}

        therefore lowest minimum is 8
    */

    long long res = 1;  
    for(int i = 0; i < n && arr[i] <= res; i++) {
        res += arr[i];
    }
    
    cout << res << endl;

    return 0;
}