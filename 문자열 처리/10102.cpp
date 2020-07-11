#include <iostream>
#include <string>
using namespace std;

int main() {
	int A = 0, B = 0;
	int k; cin >> k;
	string str; cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'A') A++;
		else B++;
	}
	if (A == B) cout << "Tie";
	else if (A > B) cout << "A";
	else if (A < B) cout << "B";
}