#include <iostream>
using namespace std;

int main() {
	int a; cin >> a;
	int cnt = 0;
	int sec = 1;
	while (a != 0) {
		if (sec > a) sec = 1;
		a -= sec;
		sec++; cnt++;
	}
	cout << cnt;
}