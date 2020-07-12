#include <iostream>
using namespace std;

int cnt = 0;

int main() {
	int a; cin >> a;
	if (a >= 9) {
		a /= 3;
		for (int i = 1; i <= a - 2; i++) {
			for (int j = 1; j <= a - 2; j++) {
				if (a - (i + j) > 0) cnt++;
			}
		}
	}
	cout << cnt;
}