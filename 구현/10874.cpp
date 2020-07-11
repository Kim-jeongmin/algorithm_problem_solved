#include <iostream>
using namespace std;

int arr[10] = { 1,2,3,4,5,1,2,3,4,5 };

int main() {
	int a; cin >> a;
	for (int i = 0; i < a; i++) {
		int num = 0;
		for (int j = 0; j < 10; j++) {
			int k; cin >> k;
			if (k == arr[j]) num++;
		}
		if (num == 10) cout << i+1 << '\n';
	}
}