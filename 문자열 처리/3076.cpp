#include <iostream>
using namespace std;

int main() {
	int R, C; cin >> R >> C;
	int A, B; cin >> A >> B;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < A; j++) {
			int s = C;
			while (s != 0) {
				if (i % 2 == 0) {
					for (int a = 0; a < B; a++) cout << 'X';
					s--;
					if (s == 0) break;
					for (int a = 0; a < B; a++) cout << '.';
					s--;
				}
				else if (i % 2 == 1) {
					for (int a = 0; a < B; a++) cout << '.';
					s--;
					if (s == 0) break;
					for (int a = 0; a < B; a++) cout << 'X';
					s--;
				}
			}
			cout << '\n';
		}
	}
}