#include <iostream>
using namespace std;

int main() {
	int a; cin >> a;
	long long result = 1;
	for (long long i = 1; i <= a; i++) result -= 2 * i - 1 - (5 * i);
	result %= 45678;
	cout << result;
}