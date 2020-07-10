#include <iostream>
#include <string>
#include <vector>
using namespace std;


int arr[51][51];
int INF = 121231;
int k;

void floyd(void){
	for (int n = 0; n < k; n++) {
		for (int i = 0; i < k; i++) {
			for (int j = 0; j < k; j++) {
				if (i == j || j == n || i == n) continue;
				else if (arr[i][j] > arr[i][n] + arr[n][j]) arr[i][j] = arr[i][n] + arr[n][j];
			}
		}
	}
}
int main() {
	cin >> k;
	for (int i = 0; i < k; i++) {
		string str; cin >> str;
		for (int j = 0; j < k; j++) {
			if (i != j) {
				if (str[j] == 'Y') arr[i][j] = 1;
				else arr[i][j] = INF;
			}
		}
	}
	floyd();
	int result = 0;
	for (int i = 0; i < k; i++) {
		int cnt = 0;
		for (int j = 0; j < k; j++) {
			if (i == j) continue;
			else if (arr[i][j] <= 2) cnt++;
		}
		if (cnt > result) result = cnt;
	}
	cout << result;
}