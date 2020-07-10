#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int arr[51][51];
int r = 0, l = 0;

int main() {
	int a, b; cin >> a >> b;
	for (int i = 0; i < a; i++) {
		string str; cin >> str;
		for (int j = 0; j < b; j++) {
			if (str[j] == '.') arr[i][j] = 0;
			else arr[i][j] = 1;
		}
	}
	for (int i = 0; i < a; i++) {
		int num = 0;
		for (int j = 0; j < b; j++) {
			if (arr[i][j] == 0) num++;
		}
		if (num == b) r++;
	}
	for (int i = 0; i < b; i++) {
		int num = 0;
		for (int j = 0; j < a; j++) {
			if (arr[j][i] == 0) num++;
		}
		if (num == a) l++;
	}
	cout << max(l, r);
}