#include <iostream>
#include <string>
using namespace std;

int main() {
	string str; cin >> str;
	int result = 10;
	for (int i = 1; i < str.size(); i++) {
		if (str[i - 1] == ')') {
			if (str[i] == '(') result += 10;
			else result += 5;
		}
		else {
			if (str[i] == ')') result += 10;
			else result += 5;
		}
	}
	cout << result;
}