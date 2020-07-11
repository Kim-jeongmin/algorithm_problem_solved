#include <iostream>
#include <string>
using namespace std;

int main() {
	string str; cin >> str;
	int c = 1;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ',') c++;
	}
	cout << c;
}