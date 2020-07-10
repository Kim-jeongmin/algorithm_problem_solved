#include <iostream>
#include <queue>
#include <string>
#include <utility>
using namespace std;
int N, M;
int arr[101][101];
int visited[101][101];
int sum = 0;
int dir[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };

bool isIn(int a, int b) {
	return (0 <= a && a < N && 0 <= b && b <= M);
}
void bfs(int a, int b) {
	queue <pair<int,int>> q;
	q.push({ a,b });
	visited[a][b] = 1;
	while (!q.empty()) {
		a = q.front().first;
		b = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int n_b = b + dir[i][1];
			int n_a = a + dir[i][0];
			if (isIn(n_a, n_b) && visited[n_a][n_b] == 0 && arr[n_a][n_b] == 1) {
				visited[n_a][n_b] = visited[a][b] + 1;
				q.push({ n_a,n_b });
			}
		}
	}
}
int main() {
	cin >> N >> M;
	cin.ignore();
	int j = 0;
	while (true) {
		string str; getline(cin, str);
		if (cin.eof()) break;
		for (int i = 0; i < str.size(); i++) {
			arr[j][i] = stoi(str.substr(i,1));
		}
		j++;
	}
	bfs(0, 0);

	cout << visited[N-1][M-1];
}