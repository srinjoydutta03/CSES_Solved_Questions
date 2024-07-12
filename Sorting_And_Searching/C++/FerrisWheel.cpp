#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Two pointer approach, start to pair the lightest and heaviest child, if the pair satisfies the criteria,
move both the pointers and increment answer, else move the pointer to the next heaviest child 
*/

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, maxWeight;
    cin >> n >> maxWeight;

    vector<int> children(n);
    for(int i = 0; i < n; i++){
        cin >> children[i];
    }

    sort(children.begin(), children.end());

    int ans = 0;
    int i = 0, j = n - 1;

    while (i <= j) {
        if (children[i] + children[j] <= maxWeight) {
            i++;
        }
        j--;
        ans++;
    }

    cout << ans << endl;
}