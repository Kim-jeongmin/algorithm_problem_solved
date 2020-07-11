#include <iostream>
using namespace std;

int main() {
	while (true) {
		int a, b; cin >> a >> b;
		int num = 0;
		if (a == 0 && b == 0) break;
		while (a >= b) {
			a -= b;
			num++;
		}
		cout << num << " " << a << " / " << b << '\n';
	}
	


}