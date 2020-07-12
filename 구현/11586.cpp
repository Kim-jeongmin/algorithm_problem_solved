#include <iostream>
#include <string>
using namespace std;

int main() {
	int a; cin >> a;
	char **arr = (char**)malloc(sizeof(char*) * a);
	for (int i = 0; i < a; i++) {
		arr[i] = (char*)malloc(sizeof(char) * a);
	}
	for (int i = 0; i < a; i++) {
		string k; cin >> k;
		for (int j = 0; j < a; j++) {
			arr[i][j] = k[j];
		}
	}
	int type; cin >> type;
	if (type == 1) {
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < a; j++) {
				cout << arr[i][j];
			}
			cout << '\n';
		}
	}
	else if (type == 2) {
		for (int i = 0; i < a; i++) {
			for (int j = a - 1; j >= 0; j--) {
				cout << arr[i][j];
			}
			cout << '\n';
		}
	}
	else if (type == 3) {
		for (int i = a - 1; i >= 0; i--) {
			for (int j = 0; j < a; j++) {
				cout << arr[i][j];
			}
			cout << '\n';
		}
	}
}