#include <iostream>
using namespace std;

int code2017[6] = { 5000000,3000000,2000000,500000,300000,100000 };
int code2018[5] = { 5120000,2560000,1280000,640000,320000 };

int main() {
	int a; cin >> a;
	while (a--) {
		int result = 0;
		int c1, c2; cin >> c1 >> c2;
		if (c1 == 1) result += code2017[0];
		else if (2 <= c1 && c1 < 4) result += code2017[1];
		else if (4 <= c1 && c1 < 7) result += code2017[2];
		else if (7 <= c1 && c1 < 11) result += code2017[3];
		else if (11 <= c1 && c1 < 16) result += code2017[4];
		else if (16 <= c1 && c1 < 22) result += code2017[5];
		if (c2 == 1) result += code2018[0];
		else if (2 <= c2 && c2 < 4) result += code2018[1];
		else if (4 <= c2 && c2 < 8) result += code2018[2];
		else if (8 <= c2 && c2 < 16) result += code2018[3];
		else if (16 <= c2 && c2 < 32) result += code2018[4];
		cout << result << '\n';
	}
}