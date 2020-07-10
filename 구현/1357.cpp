#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string a, b; cin >> a >> b;
	reverse(a.begin(), a.end()); reverse(b.begin(), b.end());
	string k = to_string(stoi(a) + stoi(b));
	reverse(k.begin(), k.end());
	cout << stoi(k);
}