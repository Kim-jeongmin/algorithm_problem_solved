#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string str; cin >> str;
	vector<char> v(str.size());
	for (int i = 0; i < str.size(); i++) v[i] = str[i];
	sort(v.begin(), v.end(), greater<char>());
	for (int i = 0; i < str.size(); i++) cout << v[i];
}