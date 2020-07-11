#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	string str; cin >> str;
	vector<int> v(26);
	for (int i = 0; i < str.size(); i++) v[str[i] - 'a']++;
	for (int i = 0; i < 26; i++) cout << v[i] << ' ';
}