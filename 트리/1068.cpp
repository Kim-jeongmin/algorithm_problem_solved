#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int root, a, result = 0;
int arr[51][51];
bool visted[51];

void bfs(int start) {
	visted[start] = true;
	queue <int> q;
	q.push(start);
	while (!q.empty()) {
		int n = q.front();
		q.pop();
		int nd = 0;
		for (int i = 0; i < a; i++) {
			if (arr[n][i] == 1 && visted[i] == false) {
				nd++;
				q.push(i);
				visted[i] = true;
			}
		}
		if (nd == 0) result++;
	}
}
int main() {
	cin >> a;
	for (int i = 0; i < a; i++) {
		int num; cin >> num;
		if (num != -1) arr[i][num] = arr[num][i] = 1;
		else root = i;
	}
	int k; cin >> k;
	visted[k] = true;
	if (!visted[root]) bfs(root);
	cout << result;
}