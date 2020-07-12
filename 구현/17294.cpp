#include <iostream>
#include <vector>
using namespace std;

int main() {
	long long a; cin >> a;
	long long k = a;
	long long cnt = 0;
	while (k != 0) {
		k /= 10;
		cnt++;
	}
	vector<long long> v(cnt);
	for (int i = 0; i < cnt; i++) {
		v[i] = a % 10;
		a /= 10;
	}
	if (cnt > 2) {
		long long cnt1 = 0;
		long long gongcha = v[0] - v[1];
		for (int i = 0; i < cnt - 1; i++) {
			if (gongcha == v[i] - v[i + 1]) {
				cnt1++;
			}
		}
		if (cnt1 == cnt-1) cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!";
		else cout << "흥칫뿡!! <(￣ ﹌ ￣)>";
	}
	else {
		cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!";
	}
}