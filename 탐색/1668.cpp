#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a; cin >> a;
	vector<int> v(a);
	int max = 0;
	for (int i = 0; i < a; i++) cin >> v[i];
	int cnt1 = 0, cnt2 = 0, max1 = 0, max2 = 0;
	for (int i = 0; i < a; i++) {
		if (max1 < v[i]) {
			max1 = v[i];
			cnt1++;
		}
	}
	for (int i = a-1; i >= 0; i--) {
		if (max2 < v[i]) {
			max2 = v[i];
			cnt2++;
		}
	}
	cout << cnt1 << '\n' << cnt2;
}