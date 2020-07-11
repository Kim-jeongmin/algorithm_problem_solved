#include <iostream>
using namespace std;

int main() {
	int a; cin >> a;
	for (int i = 0; i < a; i++) {
		int n, m; cin >> n >> m;
		cout << "You get " << n / m << " piece(s) and your dad gets " << n % m << " piece(s).\n";
	}
}