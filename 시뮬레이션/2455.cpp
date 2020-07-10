#include <iostream>
using namespace std;

int main() {
	int cnt = 0;
	int max = 0;
	for (int i = 0; i < 4; i++) {
		int a, b; cin >> a >> b;
		cnt -= a; cnt += b;
		if (max < cnt) max = cnt;
	}
	cout << max;
}