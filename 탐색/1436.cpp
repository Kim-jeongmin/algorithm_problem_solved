#include <iostream>
#include <string>
using namespace std;

int main() {
	int k; cin >> k;
	int sum = 0;
	int num = 600;
	while (true) {
		num++;
		int f = num;
		while (f != 0) {
			if (f % 1000 == 666) {
				sum++;
				if (sum == k) cout << num; break;
			}
			f /= 10;
		}
		if (sum == k) break;
	}
}