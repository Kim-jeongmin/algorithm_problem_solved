#include <iostream>
#include <queue>
using namespace std;
int N, M, V;
int arr[1001][1001];
int visited[1001];

void dfs(int v) {
	visited[v] = 1;
	cout << v << ' ';
	for (int i = 1; i <= N; i++) {
		if (visited[i] == 1 || arr[v][i] == 0) continue;
		dfs(i);
	}
}

void bfs(int v) {
	queue <int> q;
	q.push(v);
	visited[v] = 0;
	while (!q.empty()) {
		v = q.front();
		cout << q.front() << ' ';
		q.pop();
		for (int i = 1; i <= N; i++) {
			if (visited[i] == 0 || arr[v][i] == 0) continue;
			q.push(i);
			visited[i] = 0;
		}
	}
}

int main() {
	cin >> N >> M >> V;
	for (int i = 0; i < M; i++) {
		int a, b; cin >> a >> b;
		arr[a][b] = arr[b][a] = 1;
	}
	dfs(V);
	cout << '\n';
	bfs(V);
}