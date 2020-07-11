#include <iostream>
using namespace std;

int main() {
	int a; cin >> a;
	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		int k; cin >> k;
		if (k == a) cnt++;
	}
	cout << cnt;
}