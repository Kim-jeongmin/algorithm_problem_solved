#include <iostream>
#include <string>
using namespace std;

int main() {
	int cnt = 0;
	while (true) {
		string str; cin >> str;
		if (cin.eof()) break;
		cnt++;
	}
	cout << cnt;
}