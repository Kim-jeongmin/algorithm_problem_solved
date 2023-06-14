#include <bits/stdc++.h>
#define safety 0
#define danger -1
#define death -2
#define MAX_ARR 501
#define init_val -10000
using namespace std;

/*
안전 구역 = 0
위험 구역 = -1
죽음 구역 = -2
*/

int arr[MAX_ARR][MAX_ARR], result[MAX_ARR][MAX_ARR];
bool visited[MAX_ARR][MAX_ARR];
int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isIn(int x, int y){
    return 0<=x&&x<MAX_ARR&&0<=y&&y<MAX_ARR;
}

void bfs(int start_x, int start_y) {
    priority_queue<pair<int, pair<int, int>>> pq;
    pq.push({0, {start_x, start_y}});
    visited[start_x][start_y] = true;
    
    while(!pq.empty()){
        int cur_val = pq.top().first;
        int cur_x = pq.top().second.first;
        int cur_y = pq.top().second.second;

        pq.pop();
        for(int i=0;i<4;i++){
            int next_x = cur_x + dir[i][0];
            int next_y = cur_y + dir[i][1];

            if(!isIn(next_x, next_y)) continue;
            if(arr[next_x][next_y] == death) continue;
            
            if(!visited[next_x][next_y]) {
                result[next_x][next_y] = cur_val + arr[next_x][next_y];
                pq.push({result[next_x][next_y], {next_x, next_y}});
                visited[next_x][next_y] = true;
            }
            // if(next_x == MAX_ARR-1 && next_y == MAX_ARR-1) return;
        }

        
    }
}

int main(){

    // 위험 구역 지정
    int N; cin >> N;
    int X1, Y1, X2, Y2;

    for(int i=0;i<MAX_ARR;i++){
        for(int j=0;j<MAX_ARR;j++){
            result[i][j] = init_val;
        }
    }
    for(int k=0;k<N;k++){
        cin >> X1 >> Y1 >> X2 >> Y2;
        for(int i=min(Y1,Y2);i<=max(Y1,Y2);i++){
            for(int j=min(X1,X2);j<=max(X1,X2);j++){
                arr[i][j] = danger;
            }
        }
    }

    // 죽음 구역 지정
    int M; cin >> M;
    for(int k=0;k<M;k++){
        cin >> X1 >> Y1 >> X2 >> Y2;
        for(int i=min(Y1,Y2);i<=max(Y1,Y2);i++){
            for(int j=min(X1,X2);j<=max(X1,X2);j++){
                arr[i][j] = death;
            }
        }
    }

    arr[0][0] = safety;
    result[0][0] = safety;

    bfs(0, 0);
    
    
    if(result[MAX_ARR-1][MAX_ARR-1] == init_val) cout << -1;
    else cout << -result[MAX_ARR-1][MAX_ARR-1];
}