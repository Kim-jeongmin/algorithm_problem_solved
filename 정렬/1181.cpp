#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool cmp(string a, string b) {
	if (a.length() == b.length()) return a < b;
	
	else return a.length() < b.length();
}
int main() {
	int a;
	cin >> a;
	vector<string> v(a);
	for (int i = 0; i < a; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end(), cmp);
	v.erase(unique(v.begin(), v.end()), v.end());

	for (int i = 0; i<v.size();i++) {
		cout << v[i] << '\n';
	}
}