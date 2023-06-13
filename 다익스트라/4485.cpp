#include <bits/stdc++.h>
#define MAX_SIZE 126
using namespace std;

int N;
int arr[MAX_SIZE][MAX_SIZE];
int result[MAX_SIZE][MAX_SIZE];
int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isIn(int x, int y){
    return 0<=x && x<N && 0<=y && y<N;
}

void bfs(int start_x, int start_y){

    priority_queue<pair<int, pair<int, int>>> pq;
    pq.push({arr[start_x][start_y], {start_x, start_y}});
    result[start_x][start_y] = arr[start_x][start_y];

    while(!pq.empty()){
        
        int cur_val = pq.top().first;
        int cur_x = pq.top().second.first;
        int cur_y = pq.top().second.second;

        pq.pop();

        for(int i=0;i<4;i++){
            int next_x = cur_x + dir[i][0];
            int next_y = cur_y + dir[i][1];

            if(isIn(next_x, next_y) && result[next_x][next_y] < result[cur_x][cur_y] + arr[next_x][next_y]) {
                result[next_x][next_y] = result[cur_x][cur_y] + arr[next_x][next_y];
                pq.push({result[next_x][next_y], {next_x, next_y}});
            }
        }
    }
}

int main(){
	int count = 1;
    while(1){
        cin >> N;

        if(N == 0) break;

        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++) {
                cin >> arr[i][j];
                arr[i][j] *= -1;
            	result[i][j] = -999;
            }
        }

        bfs(0, 0);
        cout << "Problem " << count++ << ": " << -result[N-1][N-1] << '\n';

        for(int i=0;i<MAX_SIZE;i++) {
            for(int j=0;j<MAX_SIZE;j++){
                arr[i][j] = 0;
                result[i][j] = 0;
            }
        }
    }
}