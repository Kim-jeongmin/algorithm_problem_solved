#include <iostream>
using namespace std;


int gcd(int a, int b) {
	if (a%b == 0) return b;
	else return gcd(b,a%b);
}
int main() {
	int a, b; cin >> a >> b;
	int n, m; cin >> n >> m;
	int g ,re;
	if (b >= m) g = gcd(b, m);
	else g = gcd(m, b);
	int k = b * m / g;
	a *= k / b; n *= k / m;
	if (a + n >= k) re = gcd(a + n, k);
	else re = gcd(k, a + n);
	cout << (a + n) / re << ' ' << k / re;
}