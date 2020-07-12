#include <iostream>
using namespace std;

int arr[101][101];
int a;

void floyd() {
	for (int k = 0; k < a; k++) {
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < a; j++) {
				if (i == j && j == k) continue;
				if (arr[i][k] + arr[k][j] < arr[i][j]) arr[i][j] = 1;
			}
		}
	}
}
int main() {
	cin >> a;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			cin >> arr[i][j];
			if (arr[i][j] != 1) arr[i][j] = 314144;
		}
	}
	floyd();
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			if (arr[i][j] > 2) cout << 0 << ' ';
			else cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}
}