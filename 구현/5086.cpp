#include <iostream>
using namespace std;

int main() {
	while (true) {
		int a, b; cin >> a >> b;
		if (a == 0 && b == 0) break;
		if (a > b && a%b == 0) cout << "multiple" << '\n';
		else if (a < b && b%a == 0) cout << "factor" << '\n';
		else cout << "neither\n";
	}
}