#include <iostream>
#include <string>
using namespace std;

int main() {
	int a; cin >> a;
	cin.ignore();
	while (a--) {
		int g = 0, b = 0;
		string str; getline(cin, str);
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == 'g' || str[i] == 'G') g++;
			else if (str[i] == 'b'|| str[i] == 'B') b++;
		}
		if (g > b) cout << str << " is GOOD\n";
		else if (g < b) cout << str << " is A BADDY\n";
		else cout << str << " is NEUTRAL\n";
	}
}