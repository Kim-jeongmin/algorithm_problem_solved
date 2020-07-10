#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<int> v(26);
	while (true) {
		string str; cin >> str;
		if (cin.eof()) break;
		for (int i = 0; i < str.size(); i++) {
			v[str[i] - 97]++;
		}
	}
	int max = 0;
	for (int i = 0; i < 26; i++) if (v[i] > max) max = v[i];
	for (int i = 0; i < 26; i++) {
		if (max == v[i]) {
			char result = i + 97;
			cout << result;
		}
	}
	
}