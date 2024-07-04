#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>> n;

    vector<long long> arr(n);
    
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    long long ans = 0;

    for(int i = 1; i< n; i++){
        if(arr[i-1] > arr[i]){
            ans += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }

    cout << ans;
}