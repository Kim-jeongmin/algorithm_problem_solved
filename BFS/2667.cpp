#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int arr[30][30];
int visited[30][30];
int cpx = 1;
int A;
int dir[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };

bool Isin(int a, int b) {
	return (0 <= a && a < A && 0 <= b && b < A);
}
int bfs(int a, int b) {
	int sum = 0;
	queue <pair<int, int>> q;
	q.push({ a,b });
	visited[a][b] = cpx;
	sum++;
	while (!q.empty()) {
		a = q.front().first;
		b = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int n_a = a + dir[i][0];
			int n_b = b + dir[i][1];
			if (Isin(n_a, n_b) && visited[n_a][n_b] == 0 && arr[n_a][n_b] == 1) {
				visited[n_a][n_b] = cpx;
				q.push({ n_a,n_b });
				sum++;
			}
		}

	}
	cpx++;
	return sum;
}
int main() {
	vector<int> v(1001);
	cin >> A;
	cin.ignore();
	int k = 0;
	for (int i = 0; i < A; i++) {
		string str; getline(cin, str);
		for (int j = 0; j < A; j++) {
			arr[i][j] = str[j] - '0';
		}
	}
	for (int i = 0; i < A; i++) {
		for (int j = 0; j < A; j++) {
			if (visited[i][j] == 0 && arr[i][j] == 1) {
				v[k]=bfs(i, j);
				k++;
			}
		}
	}
	cout << cpx - 1 << '\n';
	sort(v.begin(), v.begin()+k);
	for (int i = 0; i < k; i++) {
		cout << v[i] << '\n';
	}
}