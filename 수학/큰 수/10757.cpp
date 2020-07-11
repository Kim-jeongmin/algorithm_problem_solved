#include <iostream>
#include <string>
#include <vector>
using namespace std;

void plus1(string str1, string str2) {
	vector<int> v1(str1.size()); vector<int> v2(str1.size());
	for (int i = 0; i < str1.size(); i++) v1[i] = str1[str1.size() - (i + 1)] - '0';
	for (int i = 0; i < str2.size(); i++) v2[i] = str2[str2.size() - (i + 1)] - '0';
	for (int i = 0; i < str1.size(); i++) {
		if (v1[i] + v2[i] >= 10 && i != str1.size() - 1) {
			v1[i + 1] += 1; v1[i] += v2[i] - 10;
		}
		else v1[i] += v2[i];
	}
	for (int i = str1.size()-1; i >= 0; i--) cout << v1[i];
}
int main() {
	string str1, str2; cin >> str1 >> str2;
	if (str1.size() > str2.size())	plus1(str1, str2);
	else plus1(str2, str1);
}