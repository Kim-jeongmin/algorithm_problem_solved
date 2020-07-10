#include <iostream>
using namespace std;

int main() {
	int a; cin >> a;
	for (int i = 0; i < a; i++) {
		for (int j = a-i-1; j > 0; j--)	cout << ' ';
		for (int j = 0; j <= 2 * i; j++) cout << '*';
		cout << '\n';
	}
	for (int i = a - 2; i >= 0; i--) {
		for (int j = 0; j < a - i - 1; j++) cout << ' ';
		for (int j = 2 * a; j >= 2 * (a - i); j--) cout << '*';
		cout << '\n';
	}
}