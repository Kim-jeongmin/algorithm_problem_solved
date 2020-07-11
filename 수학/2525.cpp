#include <iostream>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	int cnt; cin >> cnt;
	b += cnt;
	while (b >= 60) {
		a += 1; b -= 60;
		if (a >= 24) {
			a -= 24;
		}
	}
	cout << a << ' ' << b;
}