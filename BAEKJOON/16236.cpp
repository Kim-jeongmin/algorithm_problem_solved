#include <bits/stdc++.h>
using namespace std;

int arr[21][21]; 
int visited[21][21];
int a,size = 2, point = 0, result = 0, cnt = 0;
int dir[4][2] = {{-1,0},{0,-1},{0,1},{1,0}};

bool Isin(int x,int y){
    return 0<=x&&x<a&&0<=y&&y<a;
}
void setClear(){
    for(int i=0;i<a;i++) {
        for(int j=0;j<a;j++) {
            visited[i][j] = -1;
        }
    }
}
int search(int x,int y){
    setClear();
    visited[x][y] = cnt;
    queue<pair<int,int>> q;
    q.push({x,y});
    while(!q.empty()){
        int x1 = q.front().first;
        int y1 = q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int x2 = x1 + dir[i][0];
            int y2 = y1 + dir[i][1];
            if(!Isin(x2,y2)) continue;
            if(arr[x2][y2] < size && visited[x2][y2] < 0){
                visited[x2][y2] += ++cnt;
                if(arr[x2][y2] != 0) {
                    point++;
                    result += visited[x2][y2];
                    arr[x2][y2] = 0;
                    if(point == size){
                        size++; point = 0;
                    }
                    setClear();
                    while(!q.empty()) q.pop();
                    cnt = 0;
                }
                q.push({x2,y2});
                visited[x2][y2] = 0;
            }
        }
    }
    return result;
}

int main(){
    int sx,sy;
    cin >> a;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cin >> arr[i][j];
            if(arr[i][j] == 9){
                sx = i;
                sy = j;
            }
        }
    }
    cout << search(sx,sy) << '\n';
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cout << visited[i][j] << ' ';
        }
        cout << '\n';
    }
}