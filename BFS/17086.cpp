#include <bits/stdc++.h>
using namespace std;

int arrX, arrY;
int result = 0;
int arr[51][51], visited[51][51];
int dir[8][2] = {{1,0},{0,1},{1,1},{-1,0},{0,-1},{-1,-1},{1,-1},{-1,1}};
queue<pair<int,int>> q;

void clearVisited(){
    for(int i=0;i<arrX;i++){
        for(int j=0;j<arrY;j++){
            if(visited[i][j] == 0) visited[i][j] = -1;
        }
    }
}

void findMax(){
    for(int i=0;i<arrX;i++){
        for(int j=0;j<arrY;j++){
            result = max(result, visited[i][j]);
        }
    }
}

bool isIn(int x, int y){
    return 0<=x && x<arrX && 0<=y && y<arrY;
}

void bfs(){
    while(!q.empty()){
        int current_x = q.front().first;
        int current_y = q.front().second;
        q.pop();
        for(int i=0;i<8;i++){
            int next_x = current_x + dir[i][0];
            int next_y = current_y + dir[i][1];
            if(isIn(next_x,next_y) && visited[next_x][next_y] == -1){
                visited[next_x][next_y] = visited[current_x][current_y] + 1;
                q.push({next_x,next_y});
            }
        }
    }
}

int main(){

    cin >> arrX >> arrY;

    clearVisited();

    for(int i=0;i<arrX;i++){
        for(int j=0;j<arrY;j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1) {
                q.push({i,j});
                visited[i][j] = 0;
            }
        }
    }

    bfs();
    findMax();

    cout << result << '\n';
}