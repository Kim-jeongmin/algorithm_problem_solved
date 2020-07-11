#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v(3);
	cin >> v[0] >> v[1] >> v[2];
	int a; cin >> a;
	v[2] += a;
	while (v[2] >= 60) {
		v[2] -= 60; v[1] += 1;
		while (v[1] >= 60) {
			v[1] -= 60; v[0] += 1;
			while (v[0] >= 24) {
				v[0] -= 24;
			}
 		}
	}
	for (int i = 0; i < 3; i++) cout << v[i] << ' ';
}