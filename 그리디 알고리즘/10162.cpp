#include <iostream>
using namespace std;

int main() {
	int a; cin >> a;
	int p = 0, q = 0, k = 0;
	if (a % 10 != 0) cout << -1;
	else {
		while (a >= 300) {
			a -= 300; p++;
		}
		while (a >= 60) {
			a -= 60; q++;
		}
		while (a >= 10) {
			a -= 10; k++;
		}
		cout << p << ' ' << q << ' ' << k;
	}
}