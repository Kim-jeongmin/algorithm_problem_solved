#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		int c; cin >> c;
		sum += pow(c, 2);
	}
	cout << sum % 10;
}