#include <iostream>
#include <string>
using namespace std;

int main() {
	int a; cin >> a;
	string str; cin >> str;
	string strf, strb;
	int num = 0;
	while (true) {
		strf += str[num];
		num++;
		if (str[num] == '*') break;
	}
	num++;
	while (true) {
		strb += str[num];
		num++;
		if (num == str.size()) break;
	}
	while (a--) {
		string cmp; cin >> cmp;
		if (cmp.size() >= strf.size() + strb.size()) {
			if (cmp.substr(0, strf.size()) == strf && cmp.substr(cmp.size() - strb.size(), cmp.size()) == strb) cout << "DA" << '\n';
			else cout << "NE" << '\n';
		}
		else cout << "NE" << '\n';
	}
}