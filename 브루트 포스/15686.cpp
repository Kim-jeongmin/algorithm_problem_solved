#include <bits/stdc++.h>
#define MAX 60
using namespace std;

int N, M;
int result = 99999;
vector<pair<int, int>> chicken, house;
int graph[MAX][MAX];
bool visited[13];

int distance(pair<int, int> a, pair<int, int> b){
    return abs(a.first-b.first) + abs(a.second-b.second);
}

void dfs(int cnt, int pos){
    
    if(cnt == M) {
        int temp_result = 0;
        
        for(int i=0;i<house.size();i++){
            int temp_dis = 999;
            for(int j=0;j<chicken.size();j++){
                if(visited[j]){
                    temp_dis = min(temp_dis, distance(chicken[j], house[i]));
                }
            }
            temp_result += temp_dis;
        }
        
        result = min(result, temp_result);
        
        return;
    }
    
    if(pos == chicken.size()) return;
    
    visited[pos] = true;
    dfs(cnt+1, pos+1);
    
    visited[pos] = false;
    dfs(cnt, pos+1);
}

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N >> M;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> graph[i][j];
            
            if(graph[i][j] == 1) house.push_back({i,j});
            else if(graph[i][j] == 2) chicken.push_back({i, j});
        }
    }
    
    dfs(0, 0);
    
    cout << result;
}