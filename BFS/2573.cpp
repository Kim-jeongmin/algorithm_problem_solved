#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[301][301], temp[301][301], visited[301][301];
vector<pair<int, int>> glacier;

int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool isIn(int x, int y){
    return 0<=x && x<N && 0<=y && y<M;
}

void melt(){

    for(int i=0;i<glacier.size();i++){

        int cur_x = glacier[i].first;
        int cur_y = glacier[i].second;

        for(int j=0;j<4;j++){

            int next_x = cur_x + dir[j][0];
            int next_y = cur_y + dir[j][1];

            if(isIn(next_x, next_y) && !arr[next_x][next_y]){
                temp[cur_x][cur_y] --;
            }
        }    
        
        
    }

    for(int i=0;i<glacier.size();i++){

        int cur_x = glacier[i].first;
        int cur_y = glacier[i].second;

        arr[cur_x][cur_y] += temp[cur_x][cur_y];
        if(arr[cur_x][cur_y] <= 0){
            arr[cur_x][cur_y] = 0;
            glacier.erase(glacier.begin() + i);
            i--;
        }
    }

}

void bfs(int start_x, int start_y){

    queue<pair<int, int>> q;
    q.push({start_x, start_y});
    visited[start_x][start_y] = 1;

    while(!q.empty()){

        int cur_x = q.front().first;
        int cur_y = q.front().second;

        q.pop();

        for(int i=0;i<4;i++){
            int next_x = cur_x + dir[i][0];
            int next_y = cur_y + dir[i][1];

            if(isIn(next_x, next_y) && arr[next_x][next_y] && !visited[next_x][next_y]){
                q.push({next_x, next_y});
                visited[next_x][next_y] = 1;
            }
        }
    }
}

bool is_separate(){
    int cnt = 1;

    for(int i=0;i<glacier.size();i++){
        int cur_x = glacier[i].first;
        int cur_y = glacier[i].second;

        if(!visited[cur_x][cur_y]) {
            bfs(cur_x, cur_y);
            cnt ++;
        }

        if(cnt > 2) return true;
    }
    return false;
}

int main(){
    cin >> N >> M;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> arr[i][j];
            if(arr[i][j]) glacier.push_back({i, j});
        }
    }

    int cnt = 0;
    while(1){

        if(glacier.size() == 0) break;

        melt();
        
        cnt++;
        if(is_separate()){
            cout << cnt;
            return 0;
        }

        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                visited[i][j] = 0;
                temp[i][j] = 0;
            }
        }

    }
    
    cout << 0;
}