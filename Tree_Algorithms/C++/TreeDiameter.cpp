#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[200001];
int visited[200001];

int maxD, maxNode;

void dfs(int node, int d){
    visited[node] = 1;

    if(d > maxD){
        maxD = d;
        maxNode = node;
    }

    for(int child : adj[node]){
        if(!visited[child]){
            dfs(child, d + 1);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, a, b;
    cin >> n;

    for(int i = 1; i <= n - 1; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    dfs(1, 0);
    for(int i = 1; i <= n; i++) visited[i] = 0;
    maxD = -1;
    dfs(maxNode, 0);    

    cout << maxD << endl;
}