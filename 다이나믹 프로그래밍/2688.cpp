#include <iostream>
using namespace std;

long long dp[100][10];
int main() {
	for (int n = 0; n <= 9; n++) {
		dp[1][n] = 1;
		dp[2][n] = n + 1;
	}
	int a; cin >> a;
	while (a--) {
		int num; cin >> num;
		if (num > 2) {
			for (int i = 3; i <= num; i++) {
				dp[i][0] = 1;
				for (int j = 1; j <= 9; j++) {
					dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
				}
			}
		}
		long long sum = 0;
		for (int i = 0; i <= 9; i++) sum += dp[num][i];
		cout << sum << '\n';
	}
}