#include <iostream>
#include <string>
using namespace std;

int main() {
	int num; cin >> num;
	while (num--) {
		int a, b; cin >> a >> b;
		string str; cin >> str;
		for (int i = 0; i < str.size(); i++) {
			char c = (a*(str[i] - 'A') + b) % 26 + 'A';
			cout << c;
		}
		cout << '\n';
	}
}