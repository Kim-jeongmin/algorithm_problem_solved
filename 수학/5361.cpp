#include <iostream>
#include <vector>
using namespace std;

double arr[5] = { 350.34,230.90,190.55,125.30,180.90 };
int main() {
	int a; cin >> a;
	for (int i = 0; i < a; i++) {
		double total = 0;
		vector<int> v(5);
		for (int j = 0; j < 5; j++) {
			int b; cin >> b;
			v[j] = b;
		}
		for (int j = 0; j < 5; j++) {
			for (int k = 0; k < v[j]; k++)	total += arr[j];
		}
		cout << fixed;
		cout.precision(2);
		cout << '$' << total << '\n';
	}
}