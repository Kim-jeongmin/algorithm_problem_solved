#include <iostream>
using namespace std;

int main() {
	int a; cin >> a;
	int sum = 0;
	while (a > 0) {
		a -= 5;
		sum++;
	}
	cout << sum;
}