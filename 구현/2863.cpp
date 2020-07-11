#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
	if (a%b == 0) return b;
	else return gcd(b, a%b);
}
double sum(int a, int b, int c, int d) {
	int g1;
	if (c > d) g1 = gcd(c, d);
	else g1 = gcd(d, c);
	double mo = c * d / g1;
	a *= d / g1; b *= c / g1;
	double sum1 = a + b;
	return sum1 / mo;
}
int main() {
	vector<double> v(4);
	int a, b, c, d; cin >> a >> b >> c >> d;
	v[0] = sum(a, b, c, d);
	v[1] = sum(c, a, d, b);
	v[2] = sum(d, c, b, a);
	v[3] = sum(b, d, a, c);
	int max = 0;
	int maxposi =0;
	int maxcnt = 0;
	for (int i = 0; i < 4; i++) {
		if (max < v[i]) {
			max = v[i];
			maxposi = i;
		}
	}
	for (int i = 0; i < 4; i++) {
		if (v[i] == max) maxcnt++;
	}
	if (maxcnt >= 2) {
		sort(v.begin(), v.end());
		cout << v[0];
	}
	else {
		cout << maxposi;
	}
}