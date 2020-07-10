#include <iostream>
using namespace std;

int main() {
	int a;
	int c;
	int num = 0;
	cin >> a;
	while (true) {
		int k = 0, result = 0;
		int b;
		if(num==0) b = a;
		else b = c;
		if (0 <= b && b < 10) {
			result = b * 11;
		}
		else {
			int second1, first1;
			for (int i = 0; i < 2; i++) {
				if (i == 0) second1 = b % 10;
				else first1 = b % 10;
				b /= 10;
			}
			k = first1 + second1;
			int second2, first2;
			for (int i = 0; i < 2; i++) {
				if (i == 0) second2 = k % 10;
				else first2 = k % 10;
				k /= 10;
			}
			result = second1 * 10 + second2;
		}
		c = result;
		num++;
		if (result == a) break;
	}
	cout << num;
}