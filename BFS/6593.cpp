#include <bits/stdc++.h>
#define MAX 40
using namespace std;

int L, R, C;
char building[MAX][MAX][MAX];
int visited[MAX][MAX][MAX];
int dir[6][3] = {{-1, 0, 0}, {1, 0, 0}, {0, -1, 0}, {0, 1, 0}, {0, 0, -1}, {0, 0, 1}};
int start_x, start_y, start_z;
int end_x, end_y, end_z;

typedef struct road{
    int x;
    int y;
    int z;
}road;

void clearArr(){
    for(int i=0;i<L;i++){
        for(int j=0;j<R;j++){
            for(int k=0;k<C;k++){
                visited[i][j][k] = 0;
                building[i][j][k] = 0;
            }
        }
    }
    
}

bool isIn(int x, int y, int z){
    return 0<=x&&x<L && 0<=y&&y<R && 0<=z&&z<C;
}

void bfs(){
    
    queue<road> q;
    q.push({start_x, start_y, start_z});
    visited[start_x][start_y][start_z] = true;
    
    while(!q.empty()){
        
        int cur_x = q.front().x;
        int cur_y = q.front().y;
        int cur_z = q.front().z;
        
        q.pop();
        
        for(int i=0;i<6;i++){
            
            int next_x = cur_x + dir[i][0];
            int next_y = cur_y + dir[i][1];
            int next_z = cur_z + dir[i][2];
            
            if(isIn(next_x, next_y, next_z) && visited[next_x][next_y][next_z] == 0 && building[next_x][next_y][next_z] != '#'){
                visited[next_x][next_y][next_z] = visited[cur_x][cur_y][cur_z] + 1;
                q.push({next_x, next_y, next_z});
            }
        }
    }
    
}

int main(){
    
    while(true){
        
        cin >> L >> R >> C;   
        if(L == 0) break;
        
        for(int i=0;i<L;i++){
            for(int j=0;j<R;j++){
                string str; cin >> str;
                for(int k=0;k<C;k++){
                    building[i][j][k] = str[k];
                    
                    if(building[i][j][k] == 'S') {
                        start_x = i;
                        start_y = j;
                        start_z = k;
                    }
                    else if(building[i][j][k] == 'E'){
                        end_x = i;
                        end_y = j;
                        end_z = k;
                    }
                }
            }
        }
        
        bfs();
        
        if(visited[end_x][end_y][end_z]) cout << "Escaped in " << visited[end_x][end_y][end_z]-1 << " minute(s).\n";
        else cout << "Trapped!\n";
        
        clearArr();
        
    }
    
        
}