#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int k;
		cin >> k;
		vector<int> v(k);
		v[0] = 1, v[1] = 2; v[2] = 4;
		for (int i = 3; i < k; i++) {
			v[i] = v[i - 1] + v[i - 2] + v[i - 3];
		}
		cout << v[k - 1] << '\n';
	}
}