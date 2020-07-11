#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	while (true) {
		vector<double> v(3);
		cin >> v[0] >> v[1] >> v[2];
		if (v[0] == 0 && v[1] == 0 && v[2] == 0) break;
		sort(v.begin(), v.end());
		if (sqrt(pow(v[0], 2) + pow(v[1], 2)) == v[2]) cout << "right\n";
		else cout << "wrong\n";
	}
}