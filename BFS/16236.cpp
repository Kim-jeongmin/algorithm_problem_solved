#include <bits/stdc++.h>
using namespace std;

bool End = false;
int visited[21][21];
int arr[21][21];
int dir[4][2] = { {-1,0}, {0,1}, {1,0}, {0,-1} };
int sharkSize = 2, eatFish = 0;
int sec = 0;
int arrSize; 
int start_x, start_y;

typedef struct Shark {  
    int x;
    int y; 
    int s;     
}Shark; 

void refreshSize(){
    eatFish++;
    if(eatFish == sharkSize){
        sharkSize++; eatFish = 0;
    }
    if(sharkSize > 7) sharkSize--;
}

bool cmp(Shark a, Shark b){
    if(a.s == b.s){
        if(a.x == b.x) return a.y < b.y;
        else return a.x < b.x;
    }
    else return a.s < b.s;
}

void clearArr(){
    for(int i=0;i<arrSize;i++){
        for(int j=0;j<arrSize;j++){
            visited[i][j] = 0;
        }
    }
}

bool isIn(int x, int y){
    return 0<=x && x<arrSize && 0<=y && y<arrSize;
}

void bfs(int x, int y){
    bool brk = false;
    int num = 0;
    queue <pair<int,int>> q;
    q.push({x,y});
    vector<Shark> v(501);
    while(!q.empty() && !brk){
        int current_x = q.front().first;
        int current_y = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int next_x = current_x + dir[i][0];
            int next_y = current_y + dir[i][1];
            if(isIn(next_x,next_y) && visited[next_x][next_y] == 0 && arr[next_x][next_y] <= sharkSize){
                visited[next_x][next_y] = visited[current_x][current_y] + 1;
                q.push({next_x,next_y});
                if(0 < arr[next_x][next_y] && arr[next_x][next_y] < sharkSize) {
                    if(num != 0 && visited[next_x][next_y] > v[0].s) {
                        brk = true;
                        break;
                    }
                    v[num].x = next_x; v[num].y = next_y; v[num].s = visited[next_x][next_y];
                    num++;
                }               
            }
        }
    }
    if(num != 0) {
        sort(v.begin(),v.begin()+num,cmp);
        sec += v[0].s;
        refreshSize();
        arr[start_x][start_y] = 0;
        start_x = v[0].x; start_y = v[0].y;
        arr[start_x][start_y] = 9;
        clearArr();
        return;
    }
    End = true;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    cin >> arrSize;

    for(int i=0; i<arrSize; i++){
        for(int j=0; j<arrSize; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 9){
                start_x = i; start_y = j;
            }
        }
    }

    while(!End) bfs(start_x,start_y);

    cout << sec << '\n';
}