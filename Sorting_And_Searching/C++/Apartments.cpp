#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    cin.ignore();

    vector<int> requirements;
    vector<int> available;

    string line;

    getline(cin, line);
    stringstream ss(line);
    int num;
    while(ss >> num){
        requirements.push_back(num);
    }

    getline(cin, line);
    stringstream ss1(line);
    while(ss1 >> num){
        available.push_back(num);
    }

    int ans = 0, i = 0, j = 0;
    sort(requirements.begin(), requirements.end());
    sort(available.begin(), available.end());

    while( i < n && j < m ){
        if(requirements[i] < available[j] - k){
            i++;
        }
        else if(requirements[i] > available[j] + k){
            j++;
        }
        else{
            ans++; i++; j++;
        }
    }

    cout<<ans<<endl;
}