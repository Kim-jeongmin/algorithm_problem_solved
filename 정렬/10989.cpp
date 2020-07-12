#pragma warning(disable: 4996)
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	int a; 
	scanf("%d", &a);
	vector<int> v(10001);
	while (a--) {
		int k; 
		scanf("%d", &k);
		v[k]++;
	}
	for (int i = 1; i < 10001; i++) {
		for (int j = 1; j <= v[i]; j++) {
			printf("%d\n", i);
		}
	}
}