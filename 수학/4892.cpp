#include <iostream>
#include <vector>
using namespace std;

int main() {
	int cnt = 1;
	while (true){
		int a; cin >> a;
		if (a==0) break;
		vector<int> v(5);
		v[0] = a;
		v[1] = 3 * v[0];
		if (v[1] % 2 == 0) v[2] = (v[1] + 1) / 2;
		else v[2] = v[1] / 2;
		v[3] = 3 * v[2];
		v[4] = v[3] / 9;
		if (v[1] % 2 == 0) cout << cnt << ". even " << v[4]<< '\n';
		else cout << cnt << ". odd " << v[4] << '\n';
		cnt++;
	}
}