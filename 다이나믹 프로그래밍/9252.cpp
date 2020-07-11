#include <iostream>
#include <string>
using namespace std;

int lcs[1001][1001];
string str1, str2;

int main() {
	cin >> str1 >> str2;
	str1 = '0' + str1;
	str2 = '0' + str2;
	for (int i = 0; i < str1.size(); i++) {
		for (int j = 0; j < str2.size(); j++) {
			if (i == 0 || j == 0) {
				lcs[i][j] == 0;
				continue;
			}
			if (str1[i] == str2[j]) {
				lcs[i][j] = lcs[i - 1][j - 1] + 1;
			}
			else {
				if (lcs[i - 1][j] > lcs[i][j - 1]) {
					lcs[i][j] = lcs[i - 1][j];
				}
				else lcs[i][j] = lcs[i][j - 1];
			}
		}
	}
	int lcs_len = lcs[str1.size() - 1][str2.size() - 1];
	string result;
	int temp = lcs_len;
	for (int i = str1.size() - 1; i >= 0; i--) {
		for (int j = str2.size() - 1; j >= 0; j--) {
			if (lcs[i][j] == temp && lcs[i][j - 1] == temp - 1 && lcs[i - 1][j - 1] == temp - 1 && lcs[i - 1][j] == temp - 1) {
				temp--;
				result = str1[i] + result;

				break;
			}
		}
	}
	cout << lcs_len << '\n' << result;
}