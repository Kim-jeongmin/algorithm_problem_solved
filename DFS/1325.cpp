#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<short> arr[10001];
vector<bool> visited(10001);
int cnt;

void dfs(int start) {
	visited[start] = true;
	cnt++;
	for (int i = 0; i < arr[start].size(); i++) {
		if (visited[arr[start][i]] == true) continue;
		dfs(arr[start][i]);
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> N >> M;
	vector<int> v(N + 1);
	while (M--) {
		int x, y; cin >> x >> y;
		arr[y].push_back(x);
	}
	int max = 0;
	for (int i = 1; i <= N; i++) {
		cnt = 0;
		dfs(i);
		v[i - 1] = cnt;
		if (v[i - 1] > max) max = v[i -1];
		visited = vector<bool> (N + 1, false);
	}
	for (int i = 0; i < N; i++) {
		if (max == v[i]) cout << i + 1 << ' ';
	}
}