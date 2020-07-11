#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v1(3);
	vector<int> v2(2);
	int min1=2000, min2=2000;
	for (int i = 0; i < 3; i++) {
		cin >> v1[i];
	}
	for (int i = 0; i < 2; i++) {
		cin >> v2[i];
	}
	for (int i = 0; i < 3; i++) {
		if (min1 > v1[i]) min1 = v1[i];
	}
	for (int i = 0; i < 2; i++) {
		if (min2 > v2[i]) min2 = v2[i];
	}
	cout << min1 + min2 - 50;
	return 0;
}