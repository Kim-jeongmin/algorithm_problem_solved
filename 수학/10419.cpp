#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a; cin >> a;
	while (a--) {
		int k; cin >> k;
		int sum = 0;
		for (int i = 1; i < k; i++) {
			if (pow(i, 2) + i > k) break;
			else sum++;
		}
		cout << sum << '\n';
	}
}