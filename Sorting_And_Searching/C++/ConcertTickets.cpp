#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>

using namespace std;

/*
Used multiset for efficient insertion, searching and deletion, use upper_bound() function to find the element
just greater than the asking price, if the returning iterator points to the first element then the ticket with
that price does not exist
*/ 


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    multiset<int> prices;
    queue<int> people;

    for (int i = 0; i < n; i++) {
        int price;
        cin >> price;
        prices.insert(price);
    }

    for (int i = 0; i < m; i++) {
        int p;
        cin >> p;
        people.push(p);
    }

    while (!people.empty()) {
        int p = people.front();
        people.pop();

        auto it = prices.upper_bound(p);
        if (it != prices.begin()) {
            --it;
            cout << *it << endl;
            prices.erase(it);
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
