#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    long long* arr = new long long[n+1]; // Prefix array

    arr[0] = 0;

    for(int i = 1; i <= n; i++){
        int num;
        cin >> num;

        arr[i] = arr[i-1] + num;
    }

    while(q--){
        int a, b;
        cin >> a >> b;

        cout << arr[b] - arr[a-1] << endl;
    }

    delete[] arr;

    return 0;
}