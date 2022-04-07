#include <iostream>
#include <string>
using namespace std;

int main() {
	long long a; cin >> a;
	long long cmp = 1;
    int result = 0;
	if (a % 2 == 0 || a % 5 == 0) cout << -1;
	else {
		while (cmp % n != 0) {
			result++;
            cmp = (cmp % a) * 10 + 1;
		}
		cout << result;
	}
}