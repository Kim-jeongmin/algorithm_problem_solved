#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

char arr[51][51];
int candy, a, cnt;

void check(int a1, int b1, int a2, int b2) {

	swap(arr[a1][b1], arr[a2][b2]);

	for (int i = 0; i < a; i++) {
		cnt = 0;
		for (int j = 0; j < a - 1; j++) {
			if (arr[i][j] == arr[i][j + 1]) cnt++;
			else cnt = 0;
			if (candy < cnt) candy = cnt;
		}
	}
	for (int i = 0; i < a; i++) {
		cnt = 0;
		for (int j = 0; j < a - 1; j++) {
			if (arr[j][i] == arr[j + 1][i]) cnt++;
			else cnt = 0;
			if (candy < cnt) candy = cnt;
		}
	}

	swap(arr[a1][b1], arr[a2][b2]);
}
int main() { 
	cin >> a;
	for (int i = 0; i < a; i++) {
		string str; cin >> str;
		for (int j = 0; j < a; j++)	arr[i][j] = str[j];
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a - 1; j++) {
			if (arr[i][j] != arr[i][j + 1]) check(i, j, i, j + 1);
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a - 1; j++) {
			if (arr[j][i] != arr[j+1][i]) check(j, i, j+1, i);
		}
	}
	cout << candy + 1 << '\n';
}