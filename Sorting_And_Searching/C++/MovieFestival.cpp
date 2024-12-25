#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> events;

    while(n--){
        int a, b;
        cin >> a >> b;

        events.push_back({a, b});
    }

    sort(events.begin(), events.end(), [&](pair<int, int> a, pair<int, int> b){
        return a.second < b.second;
    });

    int count = 0, currEndTime = 0;


    for(int i = 0; i < events.size(); i++){
        if(events[i].first >= currEndTime){
            count++;
            currEndTime = events[i].second;
        }
    }

    cout << count << "\n";

    return 0;
}