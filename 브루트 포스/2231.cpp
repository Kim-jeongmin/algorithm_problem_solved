#include <iostream>
using namespace std;

int main() {
	int a; cin >> a;
	for (int i = 1; i < a; i++) {
		int num = i, cnt = num;
		while (num != 0) {
			cnt += num % 10;
			num /= 10;
		}
		if (cnt == a) {
			cout << i;
			return 0;
		}
	}
	cout << 0;
}