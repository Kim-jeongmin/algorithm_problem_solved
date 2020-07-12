#include <iostream>
#include <vector>
using namespace std;

int main() {
	double a; cin >> a;
	vector<double> v(a);
	for (int i = 0; i < a; i++) cin >> v[i];
	double sum = 0, la = 0;
	for (int i = 0; i < a; i++) {
		sum += v[i];
		la += v[i] * (1 / a);
	}
	sum /= a;
	if (la == 0) cout << "divide by zero";
	else {
		cout << fixed;
		cout.precision(2);
		cout << sum / la;
	}
	
}