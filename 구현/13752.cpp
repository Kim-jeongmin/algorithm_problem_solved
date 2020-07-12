#include <iostream>
using namespace std;

int main() {
	int a; cin >> a;
	while (a--) {
		int k; cin >> k;
		for (int i = 0; i < k; i++) cout << '=';
		cout << '\n';
	}
}