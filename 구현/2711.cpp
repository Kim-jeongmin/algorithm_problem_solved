#include <iostream>
#include <string>
using namespace std;

int main() {
	int a; cin >> a;
	while (a--) {
		int k; string str; cin >> k >> str;
		for (int i = 0; i < str.size(); i++) {
			if (i != k - 1) cout << str[i];
		}
		cout << '\n';
	}
}