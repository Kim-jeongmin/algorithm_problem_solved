#include <iostream>

using namespace std;

int arr1[6] = { 1,2,3,3,4,10 };
int arr2[7] = { 1,2,2,2,3,5,10 };
int main() {
	int a; cin >> a;
	for (int i = 0; i < a; i++) {
		int red = 0, blue = 0;
		for (int j = 0; j < 6; j++) {
			int n; cin >> n;
			while (n > 0) {
				red += arr1[j];
				n--;
			}
		}
		for (int j = 0; j < 7; j++) {
			int m; cin >> m;
			while (m > 0) {
				blue += arr2[j];
				m--;
			}
		}
		if (red > blue) cout << "Battle " << i + 1 << ": Good triumphs over Evil\n";
		else if (blue > red) cout << "Battle " << i + 1 << ": Evil eradicates all trace of Good\n";
		else cout << "Battle " << i + 1 << ": No victor on this battle field\n";
	}
}