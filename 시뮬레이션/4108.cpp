#include <iostream>
#include <string>
using namespace std;

int R, C;
int dir[8][2] = { {1,0},{1,-1},{1,1},{-1,1},{-1,0},{-1,-1},{0,1},{0,-1} };

bool IsIn(int a, int b) {
	return 0 <= a && a < R && 0 <= b && b < C;
}
int main() {
	while (true) {
		cin >> R >> C;
		if (R == 0 && C == 0) break;
		char arr[101][101];
		int result[101][101] = { 0, };
		for (int i = 0; i < R; i++) {
			string str; cin >> str;
			for (int j = 0; j < C; j++) {
				arr[i][j] = str[j];
			}
		}
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				if (arr[i][j] == '*') {
					result[i][j] = -1;
				}
				else {
					int a = i;
					int b = j;
					for (int k = 0; k < 8; k++) {
						int n_a = a + dir[k][0];
						int n_b = b + dir[k][1];
						if (IsIn(n_a, n_b)) {
							if (arr[n_a][n_b] == '*') {
								result[a][b] += 1;
							}
						}
 					}
				}
			}
		}
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				if (result[i][j] == -1) cout << "*";
				else cout << result[i][j];
			}
			cout << '\n';
		}
	}
}