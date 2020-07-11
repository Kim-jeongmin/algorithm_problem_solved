#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a; cin >> a;
	vector<int> v(a);
	for (int i = 0; i < a; i++) cin >> v[i];
	vector<int> result(1001);
	int num = 0, cnt = 0;
	for (int i = 0; i < a - 1; i++) {
		if (v[i] < v[i + 1]) {
			result[num] += v[i + 1] - v[i];
			cnt++;
		}
		if (cnt > 0 && v[i] >= v[i + 1]) {
			num++; cnt = 0;
		}
	}
	sort(result.begin(), result.begin() + num + 1);
	cout << result[num];
}