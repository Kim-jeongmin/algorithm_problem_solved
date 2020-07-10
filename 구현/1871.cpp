#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int a; cin >> a;
	while (a--) {
		string str; cin >> str;
		int total = 0;
		for (int i = 0; i < 3; i++) {
			total += (str[i] - 'A')*pow(26, 2-i);
		}
		for (int i = 4; i < 8; i++) {
			total -= (str[i] - '0') *pow(10, 7 - i);
		}
		if (abs(total) <= 100) cout << "nice\n";
		else cout << "not nice\n";
	}
}