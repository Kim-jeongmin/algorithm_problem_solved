#include <stdio.h>
#include <queue>
using namespace std;

int main() {
	priority_queue <int> pq;
	int a; scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		int k; scanf("%d", &k);
		if (k > 0) pq.push(k);
		else {
			if (!pq.empty()) {
				printf("%d\n", pq.top());
				pq.pop();
			}
			else printf("%d\n", 0);
		}
	}
}