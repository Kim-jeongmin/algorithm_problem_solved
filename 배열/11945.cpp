#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	int **arr = (int **)malloc(sizeof(int*)*a);
	for (int i = 0; i < a; i++) {
		arr[i] = (int*)malloc(sizeof(int)*b);
	}
	for (int i = 0; i < a; i++) {
		string k; cin >> k;
		for (int j = 0; j < b; j++) {
			arr[i][j] = k[j]-48;
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = b - 1; j >= 0; j--) {
			cout << arr[i][j];
		}
		cout << '\n';
	}
}