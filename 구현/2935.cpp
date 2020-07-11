#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1, x, str2; cin >> str1 >> x >> str2;
	if (x == "*") {
		for (int i = 0; i < str2.size() - 1; i++) str1 += '0';
		cout << str1;
	}
	else {
		if (str1.size() >= str2.size()) {
			if (str1[str1.size() - str2.size()] == '0') {
				str1[str1.size() - str2.size()] = '1';
			}
			else {
				str1[str1.size() - str2.size()] = '2';
			}
			cout << str1;
		}
		else {
			if (str2[str2.size() - str1.size()] == '0') {
				str2[str2.size() - str1.size()] = '1';
			}
			else {
				str2[str2.size() - str1.size()] = '2';
			}
			cout << str2;
		}
	}
}