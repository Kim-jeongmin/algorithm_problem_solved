#include <iostream>
#include <string>
#include <queue>
#include <utility>
using namespace std;

int arr[1001][1001];
int visited[1001][1001];
int min_ = 100000000,a,b;
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

void clear(){
    for(int i=0;i<a;i++) for(int j=0;j<b;j++) visited[i][j] = 0;
}    
bool Isin(int x,int y){
    return 0<=x&&x<a&&0<=y&&y<b;
}
void bfs(){
    visited[0][0] = 1;
    queue<pair<int,int>> q;
    q.push({0,0});
    while(!q.empty()){
        int x1 = q.front().first;
        int y1 = q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int x2 = x1 + dir[i][0];
            int y2 = y1 + dir[i][1];
            if(Isin(x2,y2) && arr[x2][y2]==0 && visited[x2][y2]==0){
                visited[x2][y2] = visited[x1][y1]+1;
                q.push({x2,y2});
            } 
        }
    }
    if(0<visited[a-1][b-1] && visited[a-1][b-1]<min_) min_ = visited[a-1][b-1];
}
int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> a >> b;
    for(int i=0;i<a;i++){
        string str; cin >> str;
        for(int j=0;j<b;j++){
            arr[i][j] = str[j] - '0';
        }
    }
    bfs();
    clear();
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(arr[i][j]==1){
                arr[i][j]=0;
                bfs();
                clear();
                arr[i][j]=1;
            }
        }
    }
    if(min_ == 100000000) cout << "-1";
    else cout << min_;
}