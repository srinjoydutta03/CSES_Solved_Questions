#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>

using namespace std;

/*
line sweeping algorithm, for overlapping intervals
*/

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<pair<int, int>> events;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        events.push_back({a, 1}); // arrival
        events.push_back({b, -1}); // departure
    }

    sort(events.begin(), events.end());

    int maxC = 0, currC = 0;
    for(auto event : events){
        currC += event.second;
        maxC = max(maxC, currC);
    }

    cout << maxC << endl;
}
