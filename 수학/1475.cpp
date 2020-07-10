#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	vector<double> v(9);
	string str; cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] - '0' == 6 || str[i] - '0' == 9) {
			v[6]++;
		}
		else v[str[i] - '0']++;
	}
	int max = 0;
	for (int i = 0; i < 9; i++) {
		if (i == 6) {
			if (ceil(v[i] / 2) > max) max = ceil(v[i] / 2);
		}
		else {
			if (v[i] > max) max = v[i];
		}
	}
	cout << max;
}