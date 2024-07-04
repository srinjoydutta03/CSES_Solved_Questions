#include <iostream>
#include <vector>
using namespace std;

void dfs(int x, int y, vector<vector<char>>& arr){
    if (x < 0 || x >= arr.size() || y < 0 || y >= arr[0].size() || arr[x][y] != '.') {
        return;
    }

    arr[x][y] = '#';
    dfs(x+1, y, arr);
    dfs(x, y+1, arr);
    dfs(x-1, y, arr);
    dfs(x, y-1, arr);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, m;
    cin>>n>>m;

    vector<vector<char>> arr(n, vector<char>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    int ans = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == '.'){
                ans++;
                dfs(i, j, arr);
            }
        }
    }

    cout << ans << endl;
    return 0;

}