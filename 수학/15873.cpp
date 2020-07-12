#include <iostream>
#include <string>
using namespace std;

int main() {
	string a; cin >> a;
	string front, back;
	if (a[1] == '0') {
		front = a.substr(0, 2);
		back = a.substr(2, a.size() - 2);
	}
	else {
		front = a.substr(0, 1);
		back = a.substr(1, a.size() - 1);
	}
	cout << stoi(front) + stoi(back);
}