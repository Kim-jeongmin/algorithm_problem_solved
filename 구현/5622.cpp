#include <iostream>
#include <string>
using namespace std;

int main() {
	string str; cin >> str;
	int sum = 0;
	for (int i = 0; i < str.size(); i++) {
		if (65 <= str[i] && str[i] < 68) sum += 3;
		else if (68 <= str[i] && str[i] < 71) sum += 4;
		else if (71 <= str[i] && str[i] < 74) sum += 5;
		else if (74 <= str[i] && str[i] < 77) sum += 6;
		else if (77 <= str[i] && str[i] < 80) sum += 7;
		else if (80 <= str[i] && str[i] < 84) sum += 8;
		else if (84 <= str[i] && str[i] < 87) sum += 9;
		else if (87 <= str[i] && str[i] < 91) sum += 10;
	}
	cout << sum;
}