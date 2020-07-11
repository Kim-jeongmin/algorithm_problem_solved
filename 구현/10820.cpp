#include <string>
#include <iostream>
using namespace std;

int main() {
	while (true) {
		int small = 0, large = 0, num = 0, empty = 0;
		string str; getline(cin, str);
		if (str == "") break;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == ' ') empty++;
			else if ('0' <= str[i] && str[i] <= '9') num++;
			else if ('A' <= str[i] && str[i] <= 'Z') large++;
			else small++;
		}
		cout << small << ' ' << large << ' ' << num << ' ' << empty << '\n';
	}
}