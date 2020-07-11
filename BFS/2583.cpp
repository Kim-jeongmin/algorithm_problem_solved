#include <iostream>
#include <queue>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int Cnt[101];
int num = 1;
int arr[101][101];
int visted[101][101];
int dir[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
int N, M ,K;

bool Isin(int a, int b) {
	return 0 <= a && a < N && 0 <= b && b < M;
}
int bfs(int a, int b) {
	int cnt = 1;
	visted[a][b] = num;
	queue<pair<int,int>> q;
	q.push({ a,b });
	while (!q.empty()) {
		int n = q.front().first;
		int m = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int n_a = n + dir[i][0];
			int m_b = m + dir[i][1];
			if (visted[n_a][m_b] == 0 && arr[n_a][m_b] != -1 && Isin(n_a, m_b)) {
				visted[n_a][m_b] = num;
				q.push({ n_a,m_b });
				cnt++;
			}
 		}
	}
	return cnt;
}
int main() {
	cin >> N >> M >> K;
	vector<int> v(num - 1);
	while (K--) {
		int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
		for (int i = y1; i < y2; i++) for (int j = x1; j < x2; j++) arr[i][j] = -1;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (visted[i][j] == 0 && arr[i][j] != -1) {
				Cnt[num-1] = bfs(i, j);
				num++;
			}
		}
	}
	sort(Cnt, Cnt + num - 1);
	cout << num - 1 << '\n';
	for (int i = 0; i < num - 1; i++) {
		cout << Cnt[i] << ' ';
	}
	
}