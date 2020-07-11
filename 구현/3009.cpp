#include <iostream>
#include <vector>
using namespace std;

void cmp1(vector<int> v1) {
	if (v1[0] == v1[1]) cout << v1[2] << ' ';
	else if (v1[0] == v1[2]) cout << v1[1] << ' ';
	else cout << v1[0] << ' ';
}
int main() {
	vector<int> v1(3);
	vector<int> v2(3);
	for (int i = 0; i < 3; i++) cin >> v1[i] >> v2[i];
	cmp1(v1); cmp1(v2);
}