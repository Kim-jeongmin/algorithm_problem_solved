#include <iostream>
#include <set>
using namespace std;

int main() {
	int a; cin >> a;
	set<int> s;
	while (a--) {
		int k; cin >> k;
		s.insert(k);
	}
	for (auto k : s) {
		cout << k << ' ';
	}
}