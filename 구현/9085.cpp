#include <iostream>
using namespace std;

int main() {
	int a; cin >> a;
	while (a--) {
		int sum = 0;
		int k; cin >> k;
		for (int i = 0; i < k; i++) {
			int num; cin >> num;
			sum += num;
		}
		cout << sum << '\n';
	}
}