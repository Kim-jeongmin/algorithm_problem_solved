#include <iostream>
#include <string>
using namespace std;

int main() {
	int a; cin >> a;
	while (a--) {
		int n, m, k; cin >> n >> m >> k;
		int ho = 1, floor = 1;
		while (k--) {
			if (k == 0) {
				if (to_string(floor).size() == 1) cout << ho << '0' << floor << '\n';
				else cout << ho << floor << '\n';
			}
			if (ho == n) {
				ho = 1; floor++;
			}
			else ho++;
		}
	}
}