#include <iostream>
using namespace std;

int main() {
	int a; cin >> a;
	while (true) {
		int k; cin >> k;
		if (k == 0) break;
		if (k%a == 0) cout << k << " is a multiple of " << a << ".\n";
		else cout << k << " is NOT a multiple of " << a <<".\n";
	}
}