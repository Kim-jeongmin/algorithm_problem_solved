#include <iostream>
using namespace std;

int main() {
	int arr[9][9];
	int a, b, max = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (arr[i][j] > max) {
				a = i; b = j;
				max = arr[i][j];
			}
		}
	}
	cout << max << '\n' << a+1 << " " << b+1;
}