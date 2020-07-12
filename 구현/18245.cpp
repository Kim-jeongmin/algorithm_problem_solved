#include <iostream>
#include <string>
using namespace std;

int main() {
	int jump = 2;
	while (true) {
		string str; cin >> str;
		if (str == "Was") break;
		for (int i = 0; jump*i<str.size() ; i++) {
			cout << str[jump*i];
		}
		cout << '\n';
		jump++;
	}
}