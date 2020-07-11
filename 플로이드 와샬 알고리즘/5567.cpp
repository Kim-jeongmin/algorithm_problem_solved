#include <iostream>
using namespace std;

int arr[501][501];
int INF = 3131313;
int person;

void floyd(void) {
	for (int k = 1; k <= person; k++) {
		for (int i = 1; i<= person; i++) {
			for (int j = 1; j <= person; j++) {
				if (k == i || i == j || j == k) continue;
				else if (arr[i][j] > arr[i][k] + arr[k][j]) arr[i][j] = arr[i][k] + arr[k][j];
			}
		}
	}
}

int main() {
	cin >> person;
	int cnt; cin >> cnt;
	for (int i = 1; i <= person; i++) {
		for (int j = 1; j <= person; j++) {
			if (i != j) arr[i][j] = INF;
		}
	}
	while (cnt--) {
		int a, b; cin >> a >> b;
		arr[a][b] = arr[b][a] = 1;
	}
	floyd();

	int sum = 0;
	for (int i = 0; i <= person; i++) {
		if (0<arr[1][i]&&arr[1][i] <= 2) sum++;
	}
	cout << sum;
}