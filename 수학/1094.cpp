#include <iostream>
using namespace std;

int main() {
	int a; cin >> a;
	int cnt = 0;
	while (64 > a && a >= 32) {
		a -= 32; cnt++;
	}
	while (32 > a && a >= 16) {
		a -= 16; cnt++;
	}
	while (16 > a && a>=8) {
		a -= 8; cnt++;
	}
	while (8 > a && a>=4) {
		a -= 4; cnt++;
	}
	while (4 > a && a>=2) {
		a -= 2; cnt++;
	}
	while (2 > a && a>=1) {
		a -= 1; cnt++;
	}
	if (a == 64) cnt++;
	cout << cnt;
}