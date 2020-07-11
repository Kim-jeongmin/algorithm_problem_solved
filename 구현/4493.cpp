#include <iostream>
#include <string>
using namespace std;

int main() {
	int a; cin >> a;
	while (a--) {
		int k; cin >> k;
		int p1 = 0, p2 = 0;
		for (int i = 0; i < k; i++) {
			string n, m; cin >> n >> m;
			if (n == "R") {
				if (m == "S") p1++;
				else if (m == "P") p2++;
 			}
			else if (n == "S") {
				if (m == "R") p2++;
				else if (m == "P") p1++;
			}
			else if (n == "P") {
				if (m == "S") p2++;
				else if (m == "R") p1++;
			}
		}
		if (p1 > p2) cout << "Player 1\n";
		else if (p1 < p2) cout << "Player 2\n";
		else cout << "TIE\n";
	}
}