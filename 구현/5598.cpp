#include <iostream>
#include <string>
using namespace std;

int main() {
	string str; cin >> str;
	for (int i = 0; i < str.size(); i++) {
		str[i] -= 3;
		if (str[i] - 'A' < 0) str[i] +=26;
	}
	cout << str;
}