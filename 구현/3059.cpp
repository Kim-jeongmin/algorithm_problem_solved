#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int a; cin >> a;
	while (a--) {
		vector<int> v(26);
		int sum = 0;
		string str; cin >> str;
		for (int i = 0; i < str.size(); i++) v[str[i] - 'A']++;
		for (int i = 0; i < 26; i++) if (v[i] == 0) sum += i+'A';
		cout << sum << '\n';
	}
}