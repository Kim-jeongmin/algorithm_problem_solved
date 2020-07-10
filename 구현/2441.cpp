#include <iostream>
using namespace std;

int main() {
	int a,num = 0;
	cin >> a;
	for (int i = a; i >= 1; i--) {
		for (int k = 0; k < num; k++) {
			cout << " ";
		}
		num++;
		for (int j = i; j >= 1; j--) {
			cout << '*';
		}
		cout << '\n';
	}
}