#include <bits/stdc++.h>
using namespace std;

int N;
int board[102][102];
queue<pair<int, char>> q; // 방향 전환 
queue<pair<int, int>> snake; // 뱀의 길이 및 위치

bool isIn(int x, int y){
    return 0<x && x<=N && 0<y && y<=N;
}

int main(){
    int K; cin >> N >> K;

    int x, y;
    for(int i=0;i<K;i++){
        cin >> x >> y;
        board[x][y] = 9; //사과의 위치는 9
    }

    int L; cin >> L;
    int t; char d;
    for(int i=0;i<L;i++){
        cin >> t >> d;
        q.push({t, d});
    }

    int time = 1;
    board[1][1] = 1; // 뱀이 있는 자리는 1
    int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}}; //방향
    int num = 0; 
    snake.push({1, 1}); 

    int next_x = 1, next_y = 2;

    // 뱀이 가는 다음 칸은 보드 안에 있고 자기 자신의 몸이 없어야한다.
    while(isIn(next_x, next_y) && board[next_x][next_y] != 1){

        snake.push({next_x, next_y});
        
        // 사과의 유무
        if(board[next_x][next_y] == 9) board[next_x][next_y] = 0;
        else {
            board[snake.front().first][snake.front().second] = 0;
            snake.pop();
        }
        
        // 방향전환
        if(!q.empty() && q.front().first == time) { 
            if(q.front().second == 'L') {
                if(num==0) num=3;
                else num--;
            }
            else num = (num+1)%4;

            q.pop();
        }

        board[next_x][next_y] = 1;
        time++;

        next_x += dir[num][0];
        next_y += dir[num][1];
    }

    cout << time << '\n';
}