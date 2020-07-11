#include <iostream>
#include <string>
using namespace std;

int main() {
	string str; cin >> str;
	int J = 0, I = 0;
	for (int i = 0; i < str.size() - 2; i++) {
		if (str.substr(i, 3) == "JOI") J++;
		else if (str.substr(i, 3) == "IOI") I++;
	}
	cout << J << '\n' << I;
}