#include <iostream>
using namespace std;

int main() {
	int a; cin >> a;
	int k = 0;
	for (int i = 0; i < 2 * a - 1; i++) {
		if (i < a) {
			k++;
			for (int j = 0; j < k; j++)	cout << '*';
			
		}
		else {
			k--;
			for (int j = 0; j < k; j++)	cout << '*';
			
		}
		cout << '\n';
	}
}