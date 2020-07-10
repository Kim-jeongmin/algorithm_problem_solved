#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v(3);
	v[0] = 1;	
	int a; cin >> a;
	while (a--) {
		int n, m; cin >> n >> m;
		swap(v[n - 1], v[m - 1]);
	}
	for (int i = 0; i < 3; i++) {
		if (v[i] == 1) {
			cout << i+1;
			break;
		}
	}
}