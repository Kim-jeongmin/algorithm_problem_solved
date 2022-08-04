#include <bits/stdc++.h>
using namespace std;

int M, N;
int arr[101][101], cnt[101][101];
int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool isIn(int x, int y){
    return 0<x && x<=N && 0<y && y<=M;
}

void bfs(){

    deque<pair<int, pair<int, int>>> dq;
    dq.push_back({0, {1, 1}});
    cnt[1][1] = 0;

    while(!dq.empty()){

        int cur_num = dq.front().first;

        int cur_x = dq.front().second.first;
        int cur_y = dq.front().second.second;

        if(cur_x == N && cur_y == M){
            cout << cur_num;
            return;
        }

        dq.pop_front();

        for(int i=0;i<4;i++){

            int next_x = cur_x + dir[i][0];
            int next_y = cur_y + dir[i][1];

            if(isIn(next_x, next_y) && cnt[cur_x][cur_y] + arr[next_x][next_y] < cnt[next_x][next_y]){

                if(arr[next_x][next_y]) dq.push_back({cur_num + 1,{next_x, next_y}});
                else dq.push_front({cur_num ,{next_x, next_y}});
                
                cnt[next_x][next_y] = cnt[cur_x][cur_y] + arr[next_x][next_y];

            }
        }
    }
}

int main(){
    cin >> M >> N;

    for(int i=1;i<=N;i++){
        string str; cin >> str;
        for(int j=0;j<M;j++){
            arr[i][j+1] = str[j] - '0';
            cnt[i][j+1] = INT_MAX;
        }
    }


    bfs();
}