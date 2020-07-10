#include <iostream>
#include <string>
using namespace std;

int main() {
	int a; cin >> a;
	for (int i = a; i >= 4; i--) {
		int k = i;
		int sum = 0;
		int all = 0;
		while (k != 0) {
			k /= 10;
			all++;
		}
		k = i;
		while (k != 0) {
			if (k % 10 != 7 && k % 10 != 4) break;
			k /= 10;
			sum++;
		}
		if (sum == all && sum !=0) {
			cout << i;
			break;
		}

	}
}