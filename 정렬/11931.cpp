#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	int k;
	cin >> k;
	vector<int> v(k);
	for (int i = 0; i < k; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for (int i = k-1; i >= 0; i--) {
		cout << v[i] << '\n';
	}
	return 0;
}