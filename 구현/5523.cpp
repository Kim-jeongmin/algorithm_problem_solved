#include <iostream>
using namespace std;

int main() {
	int k; cin >> k;
	int n = 0, m = 0;
	for (int i = 0; i < k; i++) {
		int a, b; cin >> a >> b;
		if (a > b) n++;
		else if (b > a) m++;
	}
	cout << n << ' ' << m;
}