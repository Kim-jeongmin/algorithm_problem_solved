#include <iostream>
#include <set>
using namespace std;

int main() {
	int a,b;
	cin >> a >> b;
	int sum = a + b;
	set<int> s;
	for (int i = 0; i < a; i++) {
		int n;
		cin >> n;
		s.insert(n);
	}
	for (int i = 0; i < b; i++) {
		int m;
		cin >> m;
		if (s.count(m) == 1) sum -= 2;
	}
	cout << sum << '\n';
	return 0;
}