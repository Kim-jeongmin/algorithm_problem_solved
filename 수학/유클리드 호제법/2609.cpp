#include <iostream>
using namespace std;

int a, b;
int gcd(int n, int m) {
	if (n%m == 0) return m;
	else return gcd(m, n%m);
}
int main() {
	cin >> a >> b;
	int g;
	if (a > b) g = gcd(a, b);
	else g = gcd(b, a);
	cout << g << '\n' << a * b / g;
 }