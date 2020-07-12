#include <iostream>
using namespace std;

int main() {
	long long sum = 0;
	for (int i = 0; i < 3; i++) {
		long long k; cin >> k;
		sum += k;
	}
	cout << sum;
}