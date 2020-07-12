#include <iostream>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	int c, d; cin >> c >> d;
	if (a + d > c + b) cout << c + b;
	else cout << a + d;
}