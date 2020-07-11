#include <iostream>
using namespace std;

int arr[1001][1001];
int main() {
	int a, b; cin >> a >> b;
	while (b--) {
		int n, m; cin >> n >> m;
		arr[n-1][m-1] = arr[m-1][n-1] = 1;
	}
	for (int i = 0; i < a; i++) {
		int sum = 0;
		for (int j = 0; j < a; j++) {
			if (arr[i][j] == 1) sum++;
		}
		cout << sum << '\n';
	}
}