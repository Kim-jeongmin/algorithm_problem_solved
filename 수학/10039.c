#include <stdio.h>

int main(){
	int arr[5]={};
	int sum =0;
	for(int i=0; i<5; i++){
		int K; scanf("%d", &K);
		if(K<40) K=40;
		sum += K;
		}
	printf("%d ", sum/5);
}