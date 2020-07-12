#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a; cin >> a;
	int v[100001];
	for (int i = 0; i < a; i++) cin >> v[i];
	for (int i = a - 2; i >= 0; i--) {
		if (v[i] < v[i + 1]) {
			int num = 100001, pos;
			for (int j = i; j < a; j++) {
				if (v[i] < v[j] && v[j] < num) {
					num = v[j];
					pos = j;
				}
			}
			swap(v[i], v[pos]);
			sort(v + i + 1, v + a);
			for (int i = 0; i < a; i++){
				cout << v[i] << ' ';
			}
			return 0;
		}
	}
	cout << -1;
}