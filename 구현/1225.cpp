#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b; cin >> a >> b;
	long long sum = 0;
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < b.size(); j++) {
			sum += (a[i] - '0')*(b[j] - '0');
		}
	}
	cout << sum;
}