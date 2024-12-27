#include <iostream>
#include <climits>
using namespace std;

/*
    Range minimum query using segment tree
    https://cp-algorithms.com/data_structures/segment_tree.html
*/

void build(int index, int low, int high, int* seg, int* arr) {
    if (low == high) {
        seg[index] = arr[low];
        return;
    }

    int mid = low + (high - low) / 2;
    build(2 * index + 1, low, mid, seg, arr);
    build(2 * index + 2, mid + 1, high, seg, arr);

    seg[index] = min(seg[2 * index + 1], seg[2 * index + 2]);
}

int query(int index, int low, int high, int l, int r, int* seg) {
    if (low >= l && high <= r) {
        return seg[index];
    }
    if (low > r || high < l) {
        return INT_MAX;
    }

    int mid = low + (high - low) / 2;
    int left = query(2 * index + 1, low, mid, l, r, seg);
    int right = query(2 * index + 2, mid + 1, high, l, r, seg);

    return min(left, right);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int* seg = new int[4 * n]; 
    build(0, 0, n - 1, seg, arr);

    while (q--) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;

        int ans = query(0, 0, n - 1, a, b, seg);
        cout << ans << endl;
    }

    delete[] arr;
    delete[] seg;

    return 0;
}
