#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int a; cin >> a;
	int cnt = 0;
	vector <int> v(26);
	while (a--) {
		string str; cin >> str;
		v[str[0] - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		if (v[i] >= 5) {
			char c = i + 'a';
			cnt++;
			cout << c;
		}
	}
	if (cnt == 0) cout << "PREDAJA";
}