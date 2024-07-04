#include <iostream>
#include <vector>
using namespace std;

void display(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

void findBeautifulPermutation(int n) {
    if (n == 1) {
        cout << "1" << endl;
    } else if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
    } else {
        vector<int> permutation;
        for (int i = 2; i <= n; i += 2) {
            permutation.push_back(i);
        }
        for (int i = 1; i <= n; i += 2) {
            permutation.push_back(i);
        }
        display(permutation);
    }
}


// bool checkBeautifulPermutation(int n, vector<int>& ans, vector<bool>& chosen) {
//     if (ans.size() == n) {
//         display(ans);
//         return true;
//     }

//     for (int i = 1; i <= n; i++) {
//         if (chosen[i]) continue;

//         if (!ans.empty() && abs(ans.back() - i) == 1) {
//             continue;
//         }

//         chosen[i] = true;
//         ans.push_back(i);

//         if (checkBeautifulPermutation(n, ans, chosen)) {
//             return true; 
//         }

//         chosen[i] = false;
//         ans.pop_back();
//     }

//     return false; // If no valid permutation is found, return false
// }

// void findBeautifulPermutation(int n) {
//     if (n == 1) {
//         cout << "1" << endl;
//     } else if (n == 2 || n == 3) {
//         cout << "NO SOLUTION" << endl;
//     } else {
//         vector<int> ans;
//         vector<bool> chosen(n + 1, false); 
//         checkBeautifulPermutation(n, ans, chosen);
//     }
// }


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    findBeautifulPermutation(n);
    return 0;
}
