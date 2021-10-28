#include <bits/stdc++.h>
#define MAX 1001
using namespace std;

int graph[MAX][MAX];
int visited[MAX][MAX][11];
int N, M, K;
int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

typedef struct pos {
    int x;
    int y;
    int block;
}pos;

bool isIn(int x, int y){
    return 0<=x && x<N && 0<=y && y<M;
}

int bfs(){
    
    queue<pos> q;
    q.push({0, 0, K});
    visited[0][0][K] = 1;
    
    while(!q.empty()){
        
        int cur_x = q.front().x;
        int cur_y = q.front().y;
        int cur_block = q.front().block;
        
        q.pop();
        
        for(int i=0;i<4;i++){
            
            int next_x = cur_x + dir[i][0];
            int next_y = cur_y + dir[i][1];
            
            if(next_x == N-1 && next_y == M-1) return visited[cur_x][cur_y][cur_block] + 1;
            
            
            if(isIn(next_x, next_y)){
                if(graph[next_x][next_y] == 1 && cur_block > 0 && visited[next_x][next_y][cur_block-1] == 0){
                    visited[next_x][next_y][cur_block-1] = visited[cur_x][cur_y][cur_block] + 1;
                    q.push({next_x, next_y, cur_block-1});
                }
                
                else if(graph[next_x][next_y] == 0 && visited[next_x][next_y][cur_block] == 0){
                    visited[next_x][next_y][cur_block] = visited[cur_x][cur_y][cur_block] + 1;
                    q.push({next_x, next_y, cur_block});
                }
            }
        }
    }
    
    return 0;
}

int main(){
    cin >> N >> M >> K;

    if(N == 1 && M == 1){
      cout << 1;
      return 0;
    }
    
    for(int i=0;i<N;i++){
        string str; cin >> str;
        
        for(int j=0;j<M;j++){
            graph[i][j] = str[j] - '0';
        }
    }
    
    int result = bfs();
    
    if(!result) cout << -1;
    else cout << result;
}