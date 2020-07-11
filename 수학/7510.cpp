#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int a; cin >> a;
	for (int i = 0; i < a; i++) {
		vector<int> v(3);
		cin >> v[0] >> v[1] >> v[2];
		sort(v.begin(), v.end());
		if (pow(v[2], 2) == pow(v[1], 2) + pow(v[0], 2)) cout << "Scenario #" << i + 1 << ":\nyes\n\n";
		else cout << "Scenario #" << i + 1 << ":\nno\n\n";
	}
}