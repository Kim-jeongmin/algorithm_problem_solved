#include <iostream>
using namespace std;

int main() {
	double S, T, D; cin >> S >> T >> D;
	double time = D / (2 * S);
	cout << time * T;
}