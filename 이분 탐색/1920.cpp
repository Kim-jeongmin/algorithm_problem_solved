#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a; scanf("%d",&a);
	vector<int> v1(a);
	for (int i = 0; i < a; i++) cin >> v1[i];
	sort(v1.begin(), v1.end());
	int b; cin >> b;
	for (int i = 0; i < b; i++) {
		int k; scanf("%d", &k);
		int result = 0; 
		int right = a - 1, left = 0;
		while (left <= right) {
			int mid = (right + left) / 2;
			if (v1[mid] > k) right = mid - 1;
			else if (v1[mid] < k) left = mid + 1;
			else {
				result = 1;
				break;
			}
		}
		printf("%d\n",result);
	}
}