#include <iostream>
using namespace std;

int main() {
	int a; cin >> a;
	int cnt = 0;
	for (int i = 1; i <= a; i++) {
		if (i < 100) cnt++;
		else if (100 <= i && i < 1000) {
			if (i % 10 - (i / 10) % 10 == (i / 10) % 10 - (i / 100) % 10) cnt++;
		}
	}
	cout << cnt;
}