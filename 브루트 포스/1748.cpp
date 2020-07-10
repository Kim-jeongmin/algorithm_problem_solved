#include <iostream>
#include <string>
using namespace std;

int main() {
	int a; cin >> a;
	int sum = 0;
	for (int i = 1; i <= a; i++) {
		int k = i;
		while (k != 0) {
			sum++;
			k /= 10;
		}
	}
	cout << sum;
}