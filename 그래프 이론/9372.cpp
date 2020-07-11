#include <iostream>
using namespace std;

int INF = 221241;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		int arr[1001][10001];
		int nation, airplane;
		cin >> nation >> airplane;
		for (int i = 0; i < airplane; i++) {
			int a, b; cin >> a >> b;
			arr[a - 1][b - 1] = arr[b - 1][a - 1] = 1;
		}
		
	
		cout << nation- 1 << '\n';
	}
	
}