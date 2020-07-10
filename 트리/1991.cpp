#include <iostream>
#include <queue>
using namespace std;

int arr[27][2];

void preorder(int root) {
	char result = root + 'A';
	cout <<  result;
	if (arr[root][0] != 0) preorder(arr[root][0]);
	if (arr[root][1] != 0) preorder(arr[root][1]);
}
void inorder(int root) {
	if (arr[root][0] != 0) inorder(arr[root][0]);
	char result = root + 'A';
	cout <<  result;
	if (arr[root][1] != 0) inorder(arr[root][1]);
}
void postorder(int root) {
	if (arr[root][0] != 0) postorder(arr[root][0]);
	if (arr[root][1] != 0) postorder(arr[root][1]);
	char result = root + 'A';
	cout << result;
}
int main() {
	int k; cin >> k;
	for (int i = 0; i < k; i++) {
		char a, b, c; cin >> a >> b >> c;
		if (b != '.') arr[a - 'A'][0] = b - 'A';
		if (c != '.') arr[a - 'A'][1] = c - 'A';
	}
	preorder(0); cout << '\n';
	inorder(0);	cout << '\n';
	postorder(0);
}