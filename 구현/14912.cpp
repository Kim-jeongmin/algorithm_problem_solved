#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	vector<int> v(a);
	for (int i = 1; i <= a; i++) {
		int k = i;
		while (k != 0) {
			v[k % 10]++;
			k /= 10;
		}
	}
	cout << v[b];
}