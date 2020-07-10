#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		double x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double dnt = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
		if (x1 == x2 && y1 == y2) {
			if (r1 == r2) cout << -1 << '\n';
			else cout << 0 << '\n';
		}
		else {
			if (dnt == r1 + r2 || r2 == r1 + dnt || r1 == dnt + r2) cout << 1 << '\n';
			else if (dnt < r1 + r2 && r2 < r1 + dnt && r1 < dnt + r2) cout << 2 << '\n';
			else cout << 0 << '\n';
		}
	}

}