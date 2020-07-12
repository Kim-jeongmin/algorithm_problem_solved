#include <iostream>
using namespace std;

int main() {
	int a; cin >> a;
	for (int i = 0; i < a; i++) {
		int p, q; cin >> p >> q;
		cout << "Case #" << i + 1 << ": " << p + q << '\n';
	}
}