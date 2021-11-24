#include <bits/stdc++.h>
using namespace std;

int result = 0;
int N, M, K;
int arr[102][102];
bool visited[102][102];
int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool isIn(int x, int y){
	return 0<x && x<=N && 0<y && y<=M;
}

void bfs(int x, int y){
	
	int cnt = 1;
	
	queue<pair<int ,int>> q;
	q.push({x, y});
	visited[x][y] = true;
	
	while(!q.empty()){
		
		int cur_x = q.front().first;
		int cur_y = q.front().second;
		
		q.pop();
		
		for(int i=0;i<4;i++){
			
			int next_x = cur_x + dir[i][0];
			int next_y = cur_y + dir[i][1];
			
			if(isIn(next_x, next_y) && !visited[next_x][next_y] && arr[next_x][next_y] == 1){
				visited[next_x][next_y] = true;
				cnt++;
				q.push({next_x, next_y});
			}
		}
	}
	
	result = max(result, cnt);
}

int main(){
	
	cin >> N >> M >> K;
	
	int x, y;
	for(int i=0;i<K;i++){
		cin >> x >> y;
		arr[x][y] = 1;
	}
	
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			if(!visited[i][j] && arr[i][j] == 1) bfs(i, j);
		}
	}
	
	cout << result;
	
}