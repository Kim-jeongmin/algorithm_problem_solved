#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, b;
	int c, d; cin >> a >> b >> c >> d;
	int result = ceil(a / b -1) * c*d;
	cout << result;
}