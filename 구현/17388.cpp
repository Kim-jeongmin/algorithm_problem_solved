#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v(3);
	for (int i = 0; i < 3; i++) cin >> v[i];
	int sum = 0;
	for (int i = 0; i < 3; i++) sum += v[i];
	if (sum < 100) {
		int min = 9999;
		int k;
		for (int i = 0; i < 3; i++) {
			if (min > v[i]) {
				min = v[i];
				k = i;
			}
		}
		if (k == 0) cout << "Soongsil";
		else if (k == 1) cout << "Korea";
		else cout << "Hanyang";
	}
	else cout << "OK";
}