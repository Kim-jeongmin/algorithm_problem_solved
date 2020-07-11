#include <iostream>
using namespace std;

int main() {
	int a = 100, b = 100;
	int k; cin >> k;
	for (int i = 0; i < k; i++) {
		int n, m; cin >> n >> m;
		if (n > m) b -= n;
		else if (n < m) a -= m;
	}
	cout << a << '\n' << b;
}