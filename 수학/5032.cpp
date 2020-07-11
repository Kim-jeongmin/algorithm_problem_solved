#include <iostream>
using namespace std;

int main() {
	int a, b, c; cin >> a >> b >> c;
	int sum = a + b;
	int result = 0;
	while (sum >= c) {
		int s = sum;
		sum /= c;
		result += sum;
		sum += s % c;
	}
	cout << result;
}