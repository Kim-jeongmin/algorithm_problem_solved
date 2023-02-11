#include <bits/stdc++.h>
#define MAX_SIZE 101
using namespace std;

int n;
int arr[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isIn(int x, int y){
    return 0<=x&&x<n&&0<=y&&y<n;
}


void bfs(){

    queue<tuple<int, int, int>> q;
    q.push({0, 0, 0});
    result[0][0] = 0;

    while(!q.empty()){
        int x = get<0>(q.front());
        int y = get<1>(q.front());
        int cnt = get<2>(q.front());

        q.pop();
        for(int i=0;i<4;i++){
            int next_x = x + dir[i][0];
            int next_y = y + dir[i][1];
            int next_cnt = cnt;

            if(!isIn(next_x, next_y)) continue;
            if(arr[next_x][next_y] == 0) next_cnt++;

            if(result[next_x][next_y] > next_cnt){
                result[next_x][next_y] = next_cnt;
                q.push({next_x, next_y, next_cnt});  
            }
            
        }
    }
}

int main(){
    cin >> n;

    for(int i=0;i<n;i++){
        string str; cin >> str;
        for(int j=0;j<str.size();j++){
            if(str[j] - '0' == 1) arr[i][j] = 1;
            result[i][j] = 3000;
        }
    }

    bfs();

    cout << result[n-1][n-1];
}