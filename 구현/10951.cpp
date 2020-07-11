#include <iostream>
using namespace std;

int main() {
	while (true) {
		int a = 0 , b = 0 ;
		cin >> a >> b;
		if (cin.eof() == true) break;
		cout << a + b << '\n';
	}
}