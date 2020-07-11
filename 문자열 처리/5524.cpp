#include <iostream>
#include <string>
using namespace std;

int main() {
	int a; cin >> a;
	while (a--) {
		string str; cin >> str;
		for (int i = 0; i < str.size(); i++) {
			str[i] = towlower(str[i]);
		}
		cout << str << '\n';
	}
}