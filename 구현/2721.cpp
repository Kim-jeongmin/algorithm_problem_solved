#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

LL T[302];

int main() {

	for (LL i = 1; i < 302; i++) {
		T[i] = i + T[i - 1];
	}

	int testCase; cin >> testCase;

	while (testCase--) {
		int n; cin >> n;



		LL result = 0;

		for (LL k = 1; k <= n; k++) {
			result += k * T[k + 1];
		}

		cout << result << '\n';

	}
}