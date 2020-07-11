#include <iostream>
using namespace std;

int n, m, k;
int arr1[101][101],arr2[101][101];

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr1[i][j];
		}
	}
	cin >> m >> k;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			cin >> arr2[i][j];
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			int sum = 0;
			for (int p = 0; p < m; p++) {
				sum += arr1[i][p] * arr2[p][j];
			}
			cout << sum << ' ';
		}
		cout << '\n';
	}

}