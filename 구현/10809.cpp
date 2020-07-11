#include <iostream>
#include <string>
using namespace std;

int arr[26];
int main() {
	string k; cin >> k;
	for (int i = 0; i < 26; i++) arr[i] = -1;
	
	for (int i = 0; i < k.size(); i++) {
		if(arr[k[i] - 97] == -1) arr[k[i] - 97] = i;
	}
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << ' ';
	}
}