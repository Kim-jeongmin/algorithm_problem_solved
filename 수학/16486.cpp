#include <iostream>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	double result =(double) a * 2 + 2 * 3.141592*b;
	cout << fixed;
	cout.precision(6);
	cout << result;
}