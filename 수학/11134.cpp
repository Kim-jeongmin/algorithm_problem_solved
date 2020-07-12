#include <iostream>
using namespace std;

int main() {
	int a; cin >> a;
	while (a--) {
		long long n, m; cin >> n >> m;
		int result = 0;
		while (n > 0) {
			result++;
			n -= m;
		}
		cout << result << '\n';
	}
}