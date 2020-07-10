#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (a%b == 0) return b;
	else return gcd(b, a%b);
}
int main() {
	int a; cin >> a;
	while (a--) {
		int n, m; cin >> n >> m;
		int g;
		if (n >= m) g = gcd(n, m);
		else g = gcd(m, n);
		cout << n * m / g << '\n';
	}
}