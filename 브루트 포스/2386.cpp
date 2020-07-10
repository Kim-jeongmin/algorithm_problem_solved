#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	while (true) {
		char c; string str; int cnt = 0;
		cin >> c;
		if (c == '#') break;
		getline(cin, str);
		for (int i = 0; i < str.size(); i++) {
			if (tolower(str[i]) == c) cnt++;
		}
		cout << c << ' ' << cnt << '\n';
	}

}