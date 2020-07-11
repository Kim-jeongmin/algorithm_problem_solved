#include <iostream>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	char **arr = (char**)malloc(sizeof(char*)*a);
	for (int i = 0; i < a; i++) arr[i] = (char*)malloc(sizeof(char)*b);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++)	cin >> arr[i][j];
	}
	int n, m; cin >> n >> m;
	for (int i = 0; i < a*2; i++) {
		for (int j = 0; j < b * 2; j++) {
			if (i >= a && j < b) {
				if (i == n - 1 && j == m - 1) {
					if (arr[2 * a - i - 1][j] == '#') cout << '.';
					else if (arr[2 * a - i - 1][j] == '.') cout << '#';
				}
				else cout << arr[2 * a - i - 1][j];
			}
			else if (i < a && j < b) {
				if (i == n - 1 && j == m - 1) {
					if (arr[i][j] == '#') cout << '.';
					else if (arr[i][j] == '.') cout << '#';
				}
				else cout << arr[i][j];
			}
			else if (i < a && j >= b) {
				if (i == n - 1 && j == m - 1) {
					if (arr[i][2 * b - 1 - j] == '#') cout << '.';
					else if (arr[i][2 * b - 1 - j] == '.') cout << '#';
				}
				else cout << arr[i][2 * b - 1 - j];
			}
			else {
				if (i == n - 1 && j == m - 1) {
					if (arr[2 * a - i - 1][2 * b - 1 - j] == '#') cout << '.';
					else if (arr[2 * a - i - 1][2 * b - 1 - j] == '.') cout << '#';
				}
				else cout << arr[2 * a - i - 1][2 * b - 1 - j];
			}
		}
		cout << '\n';
	}
}