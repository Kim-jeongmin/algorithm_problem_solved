#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int k; cin >> k;
	for (int i = 0; i < k; i++) {
		int a, b; cin >> a >> b;
		cout << a + b << '\n';
	}
}