#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int a; cin >> a;
	int num = 0;
	vector <long long> v(31);
	for (int i = 0; i <= 30; i++) {
		v[i] = pow(2, i);
	}
	for (int i = 0; i <= 30; i++) {
		if (v[i] == a) num++;
	}
	if (num > 0) cout << '1';
	else cout << '0';
}