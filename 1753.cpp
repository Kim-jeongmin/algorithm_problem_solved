#include <iostream>
#include <vector>
using namespace std;

int arr[20001][20001],A,B,INF = 24124;
vector<bool> visited(A);
vector<int> dir(A);

int getSmall(){
    int min = INF;
    int index = 0;
    for(int i=0;i<A;i++){
        if(dir[i] < min && !visited[i]){
            min = dir[i];
            index = i;
        }
    }
    return index;
}
void dijkstra(int start){
    for(int i=0;i<A;i++){
        dir[i] = arr[start][i];
    }
    visited[start] = true;
    for(int i=0;i<A-2;i++){
        int current = getSmall();
        visited[current] = true;
        for(int j=0;j<A;j++){
            if(!visited[j]){
                if(dir[current] + arr[current][j] < dir[j]){
                    dir[j] = dir[current] + arr[current][j];
                }
            }
        }
    }
}
int main(){
    cin >> A >> B;
    int start; cin >> start;
    for(int i=0;i<A;i++) {
        for(int j=0;j<A;j++) {
            if(i!=j) arr[i][j] = INF;
        }
    }
    for(int i=0;i<B;i++){
        int x,y,z; cin >> x >> y >> z;
        arr[x-1][y-1] = arr[y-1][x-1] = z;
    }
    dijkstra(start - 1);
    for(int i=0;i<A;i++) cout << dir[i] << ' ';
}