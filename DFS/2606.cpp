#include <iostream>
using namespace std;

int arr[101][101];
int visited[101];
int com;
int c = 0;

void dfs(int n) {
	c++;
	visited[n] = 1;
	for (int i = 1; i <= com; i++) {
		if (visited[i] == 1 || arr[n][i] == 0) continue;
		dfs(i);
	}

}

int main() {
	cin >> com;
	int cnt; cin >> cnt;
	while (cnt--) {
		int x, y; cin >> x >> y;
		arr[y][x] = arr[x][y] = 1;
	}
	dfs(1);
	cout << c - 1;
}