#include <bits/stdc++.h>
using namespace std;

int R, C; 
char arr[21][21];
bool visited[21][21];
int dir[4][2] = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
vector<bool> vec(26);
int result = 0;

bool isIn(int x, int y){
    return 0<=x && x<R && 0<=y && y<C;
}

void dfs(int x, int y, int cnt){

    result = max(cnt, result);

    for(int i=0;i<4;i++){

        int next_x = x + dir[i][0];
        int next_y = y + dir[i][1];
        
        //배열 범위 안에 있어야하고, 한 번도 지나지 않은 알파벳인지
        if(isIn(next_x, next_y) && !vec[arr[next_x][next_y] - 'A'] && !visited[next_x][next_y]){
            
            vec[arr[next_x][next_y] - 'A'] = true;
            visited[next_x][next_y] = true;

            dfs(next_x, next_y, cnt+1);

            vec[arr[next_x][next_y] - 'A'] = false;
            visited[next_x][next_y] = false;
        }
    }
}

int main(){
    cin >> R >> C;

    // 알파벳 배열 입력
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin >> arr[i][j];
        }
    }

    //시작 지점 알파벳 체크, 시작 지점 체크
    vec[arr[0][0] - 'A'] = true;
    visited[0][0] = true;

    dfs(0, 0, 1);

    cout << result;

}