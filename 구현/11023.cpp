#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	while (true) {
		int k; cin >> k;
		if (cin.eof()) break;
		sum += k;
	}
	cout << sum;
}