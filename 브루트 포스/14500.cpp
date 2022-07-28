#include <bits/stdc++.h>
using namespace std;

int N, M, result = 0;
int arr[501][501];
bool visited[501][501];

int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

int tetromino[4][4][2] =
{
    {{0, 0}, {0, 1}, {0, 2}, {1, 1}},
    {{0, 0}, {1, 0}, {2, 0}, {1, 1}},
    {{0, 1}, {1, 0}, {1, 1}, {1, 2}},
    {{1, 0}, {0, 1}, {1, 1}, {2, 1}}
};

bool isIn(int x, int y){
    return 0<=x && x<N && 0<=y && y<M;
}

void tetromino_sum(int x, int y, int cnt, int sum){

    if(cnt == 3) {
        result = max(sum, result);
        return;
    }

    for(int i=0;i<4;i++){
        
        int next_x = x + dir[i][0];
        int next_y = y + dir[i][1];

        if(isIn(next_x, next_y) && !visited[next_x][next_y]){
            visited[next_x][next_y] = true;
            tetromino_sum(next_x, next_y, cnt+1, sum+arr[next_x][next_y]);
            visited[next_x][next_y] = false;
        }
    }
    
}

int main(){
    cin >> N >> M;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> arr[i][j];
        }
    }    

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            visited[i][j] = true;
            tetromino_sum(i, j, 0, arr[i][j]);
            visited[i][j] = false;
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){

            for(int k=0;k<4;k++){
                
                int sum = 0;
                bool flag = true;

                for(int l=0;l<4;l++){
                    int next_i = i + tetromino[k][l][0];
                    int next_j = j + tetromino[k][l][1];

                    if(isIn(next_i, next_j)) sum += arr[next_i][next_j];
                    else {
                        flag = false; break;
                    }
                }


                if(flag) result = max(sum, result);

            }

            
        }
    }

    cout << result;
}