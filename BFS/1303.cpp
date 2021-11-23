#include <bits/stdc++.h>
using namespace std;

int N, M;
int W_result = 0, B_result = 0;
char arr[101][101];
int visited[101][101];
int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool isIn(int x, int y){
	return 0<=x && x<N && 0<=y && y<M;
}

void bfs(int x, int y, char a){
	
	int cnt = 1;
	queue<pair<int, int>> q;
	q.push({x, y});
	visited[x][y] = 1;
	
	while(!q.empty()){
		
		int cur_x = q.front().first;
		int cur_y = q.front().second;
		
		q.pop();
		
		for(int i=0;i<4;i++){
			
			int next_x = cur_x + dir[i][0];
			int next_y = cur_y + dir[i][1];
			
			if(isIn(next_x, next_y) && !visited[next_x][next_y] && arr[next_x][next_y] == a){
				visited[next_x][next_y] = 1;
				cnt++;
				q.push({next_x, next_y});
			}
		}
	}
	
	if(a == 'W') W_result += pow(cnt, 2);
	else B_result += pow(cnt, 2);
}

int main(){
	cin >> M >> N;
	
	for(int i=0;i<N;i++){
		string str; cin >> str;
		for(int j=0;j<M;j++){
			arr[i][j] = str[j];
		}
	}
	
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			
			if(!visited[i][j]) bfs(i, j, arr[i][j]);
		}
	}
	
	cout << W_result << '\n' << B_result;
}