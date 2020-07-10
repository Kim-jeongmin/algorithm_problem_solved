#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	string str; cin >> str;
	int num = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'A') num += 10 * pow(16, str.size() - i - 1);
		else if (str[i] == 'B') num += 11 * pow(16, str.size() - i - 1);
		else if (str[i] == 'C') num += 12 * pow(16, str.size() - i - 1);
		else if (str[i] == 'D') num += 13 * pow(16, str.size() - i - 1);
		else if (str[i] == 'E') num += 14 * pow(16, str.size() - i - 1);
		else if (str[i] == 'F') num += 15 * pow(16, str.size() - i - 1);
		else num += (str[i]-'0') * pow(16, str.size() - i - 1);
	}
	cout << num;
}