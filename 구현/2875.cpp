#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c; cin >> a >> b >> c;
	while (c != 0) {
		if (a >= b * 2) {
			c--; a--;
		}
		else {
			c--; b--;
		}
	}
	cout << min(a / 2, b);
}