#include <bits/stdc++.h>
using namespace std;

int result = 0;
int start_x, start_y;
int N, M;
char arr[602][602];
bool visited[602][602];
int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool isIn(int x, int y){
    return 0<=x && x<N && 0<=y && y<M;
}

void bfs(){

    queue<pair<int, int>> q;
    q.push({start_x, start_y});
    visited[start_x][start_y] = true;
    
    while(!q.empty()){

        int cur_x = q.front().first;
        int cur_y = q.front().second;

        q.pop();

        for(int i=0;i<4;i++){

            int next_x = cur_x + dir[i][0];
            int next_y = cur_y + dir[i][1];

            if(isIn(next_x, next_y) && !visited[next_x][next_y] && arr[next_x][next_y] != 'X'){
                visited[next_x][next_y] = true;
                q.push({next_x, next_y});

                if(arr[next_x][next_y] == 'P') result++;
            }
        }
    }
}

int main(){
    cin >> N >> M;

    for(int i=0;i<N;i++){
        string str; cin >> str;
        for(int j=0;j<M;j++){
            arr[i][j] = str[j];
            if(arr[i][j] == 'I') {
                start_x = i; start_y = j;
            }
        }
    }

    bfs();

    if(result == 0) cout << "TT";
    else cout << result;
}