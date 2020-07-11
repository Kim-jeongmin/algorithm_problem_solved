#include <iostream>
using namespace std;

int main() {
	int k, sum = 0;
	cin >> k;
	int a = k;
	for (int i = 0; i < a; i++) {
		sum += k;
		k--;
	}
	cout << sum;
}