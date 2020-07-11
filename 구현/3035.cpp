#include <iostream>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	int zr, zc; cin >> zr >> zc;
	char **arr = (char**)malloc(sizeof(char*)*a);
	for (int i = 0; i < a; i++) arr[i] = (char*)malloc(sizeof(char)*b);
	for (int i = 0; i < a; i++) for (int j = 0; j < b; j++)	cin >> arr[i][j];
	for (int i = 0; i < a; i++) {
		for (int v = 0; v < zr; v++) {
			for (int j = 0; j < b; j++) {
				for (int k = 0; k < zc; k++) {
					cout << arr[i][j];
				}
			}
			cout << '\n';
		}
	}
}