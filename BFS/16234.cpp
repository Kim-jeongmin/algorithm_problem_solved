#include <bits/stdc++.h>
using namespace std;

int A[51][51];
int visited[51][51];
bool locked[51][51];
int N, L, R;
int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int cnt = 1;
int result = 0;
bool flag = false;

bool isIn(int x, int y){
    return 0<=x && x<N && 0<=y && y<N;
}

void clearVisited(){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            visited[i][j] = 0;
        }
    }
}

void bfs(int start_x, int start_y){
    
    int average = A[start_x][start_y];
    int temp_cnt = 1;

    queue<pair<int, int>> q;
    q.push({start_x, start_y});
    visited[start_x][start_y] = cnt;
    locked[start_x][start_y] = true;


    while(!q.empty()){

        int cur_x = q.front().first;
        int cur_y = q.front().second;

        q.pop();

        for(int i=0;i<4;i++){

            int next_x = cur_x + dir[i][0];
            int next_y = cur_y + dir[i][1];

            if(isIn(next_x, next_y) && visited[next_x][next_y] == 0 && L <= abs(A[next_x][next_y] - A[cur_x][cur_y]) && abs(A[next_x][next_y] - A[cur_x][cur_y]) <= R && !locked[next_x][next_y]){
                visited[next_x][next_y] = cnt;
                average += A[next_x][next_y];
                temp_cnt++;
                q.push({next_x, next_y});
                locked[next_x][next_y] = true;
                flag = true;
            }
        }
    }
    
    average/=temp_cnt;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(visited[i][j] == cnt) {
                A[i][j] = average;
                locked[i][j] = false;
            }
        }
    }
}

int main(){
    cin >> N >> L >> R;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> A[i][j];
        }
    }

    while(true){
    
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(visited[i][j] == 0 && !locked[i][j]) {
                    bfs(i, j); cnt++;
                }
            }
        }

        clearVisited();
        if(flag) result++;
        else break;

        flag = false; cnt = 1;
    }

    cout << result;

}