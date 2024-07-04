#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        
    }

    sort(arr.begin(), arr.end());
    int count = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] != arr[i-1]){
            count++;
        }
    }

    cout << count;
}