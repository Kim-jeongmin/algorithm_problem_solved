#include <iostream>
using namespace std;

int main() {
	int a; cin >> a;
	int cnt = 0;
	for (int i = 0; i < a; i++) {
		int k; cin >> k;
		if (i + 1 != k) cnt++;
	}
	cout << cnt;
}