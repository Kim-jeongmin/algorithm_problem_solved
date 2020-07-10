#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a;
	cin >> a;
	vector <int> v(a+1);
	v[0] = 0;
	v[1] = 0;
	for (int i = 2; i < a+1; i++) {
		vector <int> cmp(3);
		if (i % 3 == 0) cmp[0] = v[i / 3] + 1;
		if (i % 2 == 0) cmp[1] = v[i / 2] + 1;
		cmp[2] = v[i - 1] + 1;
		sort(cmp.begin(), cmp.end());
		for (int j = 0; j < 3; j++) {
			if (cmp[j] != 0) {
				v[i] = cmp[j];
				break;
			}
		}
	}
	cout << v[a];
}