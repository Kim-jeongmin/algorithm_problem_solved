#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c; cin >> a >> b >> c;
	while (c != 0) {
		if (a > b) {
			b++; c--;
		}
		else {
			a++; c--;
		}
	}
	cout << min(a, b)*2;
}