#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i < 10001; i++) {
		int cnt = 0;
		for (int j = i; j >= 1; j--) {
			int sum = j;
			int k = j;
			while (k!=0) {
				sum += k % 10;
				k /= 10;
			}
			if (sum == i) cnt++;
		}
		if (cnt == 0) cout << i << '\n';
	}
}