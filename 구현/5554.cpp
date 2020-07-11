#include <iostream>
using namespace std;

int main() {
	int sec = 0, min = 0;
	for (int i = 0; i < 4; i++) {
		int a; cin >> a;
		sec += a;
		while (sec >= 60) {
			sec -= 60;
			min++;
		}
	}
	cout << min << '\n' << sec;
}