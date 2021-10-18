#include <bits/stdc++.h>
using namespace std;

int R, C, result = 0; 
int arr[51][51];
int visited[51][51];
int dir[4][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};


void Clear(){
    for(int i=0;i<51;i++){
        for(int j=0;j<51;j++){
            visited[i][j] = 0;
        }
    }
}

bool isIn(int x, int y){
    return 0<=x && x<R && 0<=y && y<C;
}

void bfs(int x, int y){
    
    visited[x][y] = 1;
    queue<pair<int, int>> q;
    q.push({x, y});
    
    while(!q.empty()){
        
        int cur_x = q.front().first;
        int cur_y = q.front().second;
        
        q.pop();
        
        for(int i=0;i<4;i++){
            
            int next_x = cur_x + dir[i][0];
            int next_y = cur_y + dir[i][1];
            
            if(isIn(next_x, next_y) && visited[next_x][next_y] == 0 && arr[next_x][next_y] == 1){
                visited[next_x][next_y] = visited[cur_x][cur_y] + 1;
                q.push({next_x, next_y});
                result = max(visited[next_x][next_y], result);
            }
        }
    }
    
}

int main(){
    cin >> R >> C;
    
    for(int i=0;i<R;i++){
        string str; cin >> str;
        
        for(int j=0;j<C;j++){
            if(str[j] == 'L') arr[i][j] = 1;
        }
    }
    
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(arr[i][j] == 1) {
                bfs(i,j);
                Clear();
            }
        }
    }
    
    cout << result - 1;
    
}