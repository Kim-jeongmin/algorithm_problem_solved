#include <iostream>
using namespace std;

int main() {
	int a; cin >> a;
	int num = 1;
  int k = 0;
  int gong = 1;
	while (a > 6 * k + 1) {
		num++;
		for (int i = 0; i < gong; i++)	k++;
    gong ++;
	}
	cout << num;
}