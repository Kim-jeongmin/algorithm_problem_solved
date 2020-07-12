#include <iostream>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	int c; cin >> c;
	if (a + b >= 2*c) cout << (a + b) - 2*c;
	else cout << a + b;
}