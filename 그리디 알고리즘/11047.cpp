#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	int cnt = 0;
	vector<int> v(a);
	for (int i = 0; i < a; i++) {
		int num; cin >> num;
		v[i] = num;
	}
	for (int i = a - 1; i >= 0; i--) {
		while (v[i] <= b) {
			b -= v[i];
			cnt++;
		}
	}
	cout << cnt;
}