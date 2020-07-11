#include <iostream>
#include <string>
using namespace std;

int main() {
	int num = 0;
	int cnt = 0;
	while (true) {
		string str; cin >> str;
		if (cin.eof()) break;
		num++;
		for (int i = 0; i < str.size(); i++) {
			if ("FBI" == str.substr(i, 3)) {
				cout << num << ' ';
				cnt++;
				break;
			}
		}
	}
	if (cnt == 0) cout << "HE GOT AWAY!";
}