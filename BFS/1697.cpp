#include <iostream>
#include <queue>
#include <utility>
#include <cmath>
using namespace std;

bool End = false;
bool visited[100001];
int cnt = 0;

void bfs(int a, int b) {
	queue<pair<int,int>> q;
	q.push({ a, cnt });
	visited[a] = true;
	while (End == false) {
		int num = q.front().first;
		cnt = q.front().second;
		q.pop();
		visited[num] = true;
		for (int i = 0; i < 3; i++) {
			int num_n;
			if (i == 0) num_n = num * 2;
			else if (i == 1) num_n = num - 1;
			else num_n = num + 1;
			if (0 <= num_n && num_n <= 100000 && visited[num_n] == false) q.push({ num_n , cnt + 1});
			if (num_n == b) {
				End = true;
				break;
			}
		}
	}
}

int main() {
	int a, b; cin >> a >> b;
	if (a < b) {
		bfs(a, b);
		cout << cnt + 1;
	}
	else cout << abs(a - b);
}