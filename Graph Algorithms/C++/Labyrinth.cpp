#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
 
using namespace std;
 
struct Point{
    int x, y;
};
 
 
int n, m;
vector<vector<char>> labyrinth;
vector<vector<bool>> visited;
vector<vector<Point>> parent;
Point start, end;
vector<char> directions = {'U', 'D', 'L', 'R'};
vector<Point> moves = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
 
bool is_valid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m && labyrinth[x][y] != '#' && !visited[x][y]);
}
 
void bfs(Point start){
    queue<Point> q;
    q.push(start);
    visited[start.x][start.y] = true;
 
    while(!q.empty()){
        Point current = q.front();
        q.pop();
 
        for(int i= 0; i<4; i++){
            int nx = current.x + moves[i].x;
            int ny = current.y + moves[i].y;
 
            if(is_valid(nx, ny)){
                visited[nx][ny] = true;
                parent[nx][ny] = current;
                q.push({nx, ny});
 
                if(labyrinth[nx][ny] == 'B'){
                    ::end = {nx, ny};
                    return;
                }
            }
        }
    }
}
 
string get_path(){
    string path;
    Point current = ::end;
    while(current.x != start.x || current.y != start.y){
        Point p = parent[current.x][current.y];
        if (current.x == p.x + 1) path += 'D';
        if (current.x == p.x - 1) path += 'U';
        if (current.y == p.y + 1) path += 'R';
        if (current.y == p.y - 1) path += 'L';
        current = p;
    }
 
    reverse(path.begin(), path.end());
    return path;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    cin >> n >> m;
    labyrinth.resize(n, vector<char>(m));
    visited.resize(n, vector<bool>(m, false));
    parent.resize(n, vector<Point>(m, {-1, -1}));
 
    for(int i = 0; i<n; i++){
        for(int j = 0; j< m; j++){
            cin>>labyrinth[i][j];
            if (labyrinth[i][j] == 'A') start = {i, j};
            if (labyrinth[i][j] == 'B') ::end = {i, j};
        }
    }
 
    bfs(start);
 
    if (visited[::end.x][::end.y]) {
        cout << "YES" << endl;
        cout << get_path().length() << endl;
        cout << get_path() << endl;
    } else {
        cout << "NO" << endl;
    }
}