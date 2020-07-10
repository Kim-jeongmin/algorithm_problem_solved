#include <stdio.h>
#include <queue>
using namespace std;

int main() {
	int k; scanf("%d", &k);
	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 0; i < k; i++) {
		int a; scanf("%d", &a);
		if (a != 0) pq.push(a);
		else {
			if (!pq.empty()) {
				printf("%d\n", pq.top());
				pq.pop();
			}
			else printf("%d\n", 0);
		}
	}
}