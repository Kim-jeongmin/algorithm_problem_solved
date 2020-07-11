#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v(3);
	cin >> v[0] >> v[1] >> v[2];
	sort(v.begin(), v.end());
	for (int i = 0; i < 3; i++) {
		cout << v[i] << ' ';
	}
}

