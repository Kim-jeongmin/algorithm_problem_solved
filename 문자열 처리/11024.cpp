#include <iostream>
#include <string>
using namespace std;

int main() {
	int a; cin >> a;
	cin.ignore();
	while (a--) {
		string str; getline(cin, str);
		int keep = 0;
		int sum = 0;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == ' ') {
				sum += stoi(str.substr(keep, i - keep));
				keep = i + 1;
			}
		}
		sum += stoi(str.substr(keep,str.size() - keep));
		cout << sum << '\n';
	}
}