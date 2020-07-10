#include <iostream>
using namespace std;

int main() {
	int a; cin >> a;
	int cnt = 0;
	for (int i = 0; i < a; i++) {
		int k; cin >> k;
		int cnt1 = 0;
		if (k != 1) {
			for (int j = 2; j < k; j++) {
				if (k%j == 0) cnt1++;
			}
			if (cnt1 == 0) cnt++;
		}
	}
	cout << cnt;
}