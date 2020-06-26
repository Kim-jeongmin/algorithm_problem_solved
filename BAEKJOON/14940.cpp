#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int visited[1001][1001];
int arr[1001][1001];
int a,b,st1,st2;
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
bool Isin(int x,int y){
    return 0<=x && x<a && 0<=y && y<b;
}
void bfs(int x,int y){
    visited[x][y] = 0;
    queue<pair<int,int>> q;
    q.push({x,y});
    while(!q.empty()){
        int x1 = q.front().first;
        int y1 = q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int x2 = x1 + dir[i][0];
            int y2 = y1 + dir[i][1];
            if(Isin(x2,y2) && arr[x2][y2] == 1 && visited[x2][y2] == 0){
                q.push({x2,y2});
                visited[x2][y2] = visited[x1][y1] + 1;
            }
        }
    }
}
int main(){
    cin >> a >> b;
    for(int i=0;i<a;i++) {
        for(int j=0;j<b;j++) {
            cin >> arr[i][j];
            if(arr[i][j] == 2){
                st1 = i; st2 = j;
            }
        }
    }
    bfs(st1,st2);
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(visited[i][j] == 0 && arr[i][j] == 1) cout << -1 << ' ';
            else cout << visited[i][j] << ' ';
        }
        cout << '\n';
    }
}