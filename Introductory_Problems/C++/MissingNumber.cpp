#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    vector<int> arr (n, 0);
    for(int i = 0; i<n-1; i++){
        int temp;
        cin>>temp;

        arr[temp-1] = 1;
    }

    auto it = find(arr.begin(), arr.end(), 0);
    cout << distance(arr.begin(), it) + 1;
}