#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a; cin >> a;
	vector<int> v(a);
	for (int i = 0; i < a; i++) {
		int k; cin >> k;
		v[i] = k;
	}
	sort(v.begin(), v.end());
	cout << v[0] << " " << v[a-1];
}