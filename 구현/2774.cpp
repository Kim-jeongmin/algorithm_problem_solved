#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	int a; cin >> a;
	while (a--) {
		string str; cin >> str;
		set <int> s;
		for (int i = 0; i < str.size(); i++) {
			s.insert(str[i]-'0');
		}
		cout << s.size() << '\n';
	}
}