#include <iostream>
using namespace std;

int main() {
	int a; cin >> a;
	while (a > 8) {
		a -= 8;
	}
	if (a == 6) cout << 4;
	else if (a == 7) cout << 3;
	else if (a == 8) cout << 2;
	else cout << a;
}