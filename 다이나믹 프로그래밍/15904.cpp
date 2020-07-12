#include <iostream>
#include <string>
using namespace std;

int lcs[1001][1001];
int main() {
	string str; getline(cin,str);
	string str1, str2 = "UCPC";
	for (int i = 0; i < str.size(); i++) {
		if ('A' <= str[i] && str[i] <= 'Z')	str1 += str[i];
	}
	str1 = '0' + str1;
	str2 = '0' + str2;
	for (int i = 0; i < str1.size(); i++) {
		for (int j = 0; j < str2.size(); j++) {
			if (i == 0 || j == 0) {
				lcs[i][j] = 0;
				continue;
			}
			if (str1[i] == str2[j]) {
				lcs[i][j] = lcs[i - 1][j - 1] + 1;
			}
			else {
				if (lcs[i][j - 1] > lcs[i - 1][j]) lcs[i][j] = lcs[i][j - 1];
				else lcs[i][j] = lcs[i - 1][j];
			}
		}
	}
	if (lcs[str1.size() - 1][str2.size() - 1] == 4) cout << "I love UCPC";
	else cout << "I hate UCPC";
	
}