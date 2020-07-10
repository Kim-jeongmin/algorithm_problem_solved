#include <iostream>
using namespace std;

int main() {
	int a, b, c; cin >> a >> b >> c;
	int cnt = 1;
	if (a == 15) a = 0;
	if (b == 28) b = 0;
	if (c == 19) c = 0;
	while (true) {
		if (cnt % 15 == a && cnt % 28 == b && cnt % 19 == c) break;
		cnt++;
	}
	cout << cnt;
}