#include <bits/stdc++.h>
#define MAX 1001
using namespace std;

int arr[MAX][MAX];
bool visited[MAX][MAX];
int N, M;
int L, R;
int start_x, start_y;
int result = 1;

int dir[4][2] = {{1, 0}, {-1, 0}, {0 ,-1}, {0, 1}};

typedef struct pos{
    int x;
    int y;
    int L;
    int R;
}pos;

bool isIn(int x, int y){
    return 0<=x && x<N && 0<=y && y<M;
}

void bfs(){
    
    queue<pos> q;
    q.push({start_x, start_y, L, R});
    visited[start_x][start_y] = true;
    
    while(!q.empty()){
        
        int cur_x = q.front().x;
        int cur_y = q.front().y;
        int cur_L = q.front().L;
        int cur_R = q.front().R;
        
        q.pop();
        
        //상하 한번에 탐색
        for(int i=0;i<2;i++){
            
            int next_x = cur_x + dir[i][0];
            int next_y = cur_y + dir[i][1];
            
            while(0 <= next_x && next_x < N){
                if(!visited[next_x][next_y] && !arr[next_x][next_y]){
                    q.push({next_x, next_y, cur_L, cur_R});
                    visited[next_x][next_y] = true;
                    result++; 
                    if(i == 0) next_x++;
                    else next_x--;
                }
                else break;
            }
        }
        
        //좌우 한 번씩 탐색
        for(int i=2;i<4;i++){
            if(i == 2 && cur_L == 0) continue;
            if(i == 3 && cur_R == 0) continue;
            
            int next_x = cur_x + dir[i][0];
            int next_y = cur_y + dir[i][1];
            
            if(isIn(next_x, next_y) && !visited[next_x][next_y] && !arr[next_x][next_y]){
                if(i == 2) q.push({next_x, next_y, cur_L-1, cur_R});
                else if (i == 3) q.push({next_x, next_y, cur_L, cur_R-1});

                visited[next_x][next_y] = true;
                result++;
            }
        }
    }
}

int main(){
    cin >> N >> M;
    cin >> L >> R;
    
    for(int i=0;i<N;i++){
        string str; cin >> str;
        for(int j=0;j<M;j++){
            arr[i][j] = str[j] - '0';
            if(arr[i][j] == 2){
                start_x = i;
                start_y = j;
            }
        }
    }
    
    bfs();
    
    cout << result << '\n';
}