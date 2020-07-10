#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a; cin >> a;
	vector<int> v(a);
	for (int i = 0; i < a; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	if (a == 1) cout << v[0] * v[0];
	else cout << v[0] * v[a - 1];
}