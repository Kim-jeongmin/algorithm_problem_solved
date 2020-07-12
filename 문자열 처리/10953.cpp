#include <iostream>
#include <string>
using namespace std;

int main() {
	int a; cin >> a;
	for (int i = 0; i < a; i++) {
		string b; cin >> b;
		int sum = b[0] + b[2];
		cout << sum -96 << '\n';
	}
}