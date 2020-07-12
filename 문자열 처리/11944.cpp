#include <iostream>
#include <string>
using namespace std;

int main() {
	string str; int k;
	string result;
	cin >> str >> k;
	for (int i = 0; i < stoi(str); i++) result += str;
	if (result.size() > k) cout << result.substr(0, k);
	else cout << result;
}