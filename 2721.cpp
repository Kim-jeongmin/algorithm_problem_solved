#include <bits/stdc++.h>
using namespace std;

int T[301];

int main() {

	for (int i = 1; i < 301; i++) {
		T[i] = i + T[i-1];
	}

	int testCase; cin >> testCase;

	while (testCase--) {
		int n; cin >> n;

		int result = 0;

		for (int k = 1; k <= n; i++) {
			result += k * T[k + 1];
		}

		cout << result + 1 << '\n';
		
	}
}