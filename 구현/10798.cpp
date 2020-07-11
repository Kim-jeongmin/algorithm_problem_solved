#include <iostream>
#include <string>
using namespace std;

char arr[5][15];
int main() {
	for (int i = 0; i < 5; i++) {
		string str; cin >> str;
		for (int j = 0; j < str.size(); j++) {
			arr[i][j] = str[j];
		}
	}
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[j][i] != NULL) cout << arr[j][i];
		}
	}
}