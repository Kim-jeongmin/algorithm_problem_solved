#include <iostream>
#include <queue>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;

int num = 1;
int a, b;
int arr[501][501];
int visted[501][501];
int dir[4][2] = { {1,0} ,{-1,0},{0,1},{0,-1} };

bool Isin(int n, int m) {
	return 0 <= n && n < a && 0 <= m && m < b;
}
int bfs(int n, int m) {
	int cnt = 1;
	visted[n][m] = num;
	queue <pair<int,int>> q;
	q.push({ n,m });
	while (!q.empty()) {
		int n_a = q.front().first;
		int m_a = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int n_b = n_a + dir[i][0];
			int m_b = m_a + dir[i][1];
			if (arr[n_b][m_b] == 1 && visted[n_b][m_b] == 0 && Isin(n_b, m_b)) {
				visted[n_b][m_b] = num;
				q.push({ n_b,m_b });
				cnt++;
			}
		}
 	}
	return cnt;
}
int main() {
	vector<int> v(1000001);
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (arr[i][j] == 1 && visted[i][j] == 0) {
				v[num - 1] = bfs(i, j);
				num++;
			}
		}
	}
	int max = 0;
	for (int i = 0; i < num - 1; i++) {
		if (max < v[i]) max = v[i];
	}
	cout << num - 1 << '\n' << max;
}