#include <bits/stdc++.h>
#define MAX 1001
using namespace std;

typedef struct status {
    int x;
    int y;
    char c;
} status;

int w, h;
char arr[MAX][MAX];
int visited_s[MAX][MAX];
bool visited_f[MAX][MAX];
int dir[4][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
queue<status> q;

void visitedClear(){
    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++){
            visited_s[i][j] = 0;
            visited_f[i][j] = 0;
            arr[i][j] = 0;
        }
    }
    
    while(!q.empty()) q.pop();
}

bool isEscape(int x, int y){
    if(x == 0 || y == 0) return true;
    if(x == h-1 || y == w-1) return true;
    
    return false;
}

bool isIn(int x, int y){
    return 0<=x && x<h && 0<=y && y<w;
}

int bfs(){
    
    while(!q.empty()){
        
        int cur_x = q.front().x;
        int cur_y = q.front().y;
        int cur_s = q.front().c;
        
        q.pop();
        
        for(int i=0;i<4;i++){
            
            int next_x = cur_x + dir[i][0];
            int next_y = cur_y + dir[i][1];
            
            if(cur_s == '@'){            
                if(isIn(next_x, next_y) && visited_f[next_x][next_y] == 0 && visited_s[next_x][next_y] == 0&& arr[next_x][next_y] == '.'){
                    visited_s[next_x][next_y] = visited_s[cur_x][cur_y] + 1;
                    
                    if(isEscape(next_x, next_y)) return visited_s[next_x][next_y];
                    q.push({next_x, next_y, '@'});
                    
                }
            }
            else if(cur_s == '*'){
                if(isIn(next_x, next_y) && !visited_f[next_x][next_y] && (arr[next_x][next_y] == '.' || arr[next_x][next_y] == '@')){
                    visited_f[next_x][next_y] = 1;
                    q.push({next_x, next_y, '*'});
                }
            }
            
        }
    }
    
    return -1;
}

int main(){
    int testCase; cin >> testCase;
    
    while(testCase--){
        bool flag = false;
        
        cin >> w >> h;
        
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                cin >> arr[i][j];
                if(arr[i][j] == '*'){
                    q.push({i, j, '*'});
                    visited_f[i][j] = 1;
                }
            }
        }
    
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(arr[i][j] == '@'){
                    q.push({i, j, '@'});
                    if(isEscape(i, j)){
                        flag = true;
                    }
                    visited_s[i][j] = 1;
                }
            }
        }
        
        if(flag) {
            cout << 1 << '\n';
            continue;
        }
         
        
        int result = bfs();
        
        if(result == -1) cout << "IMPOSSIBLE\n";
        else cout << result << '\n';
        
        
        visitedClear();
    }
}