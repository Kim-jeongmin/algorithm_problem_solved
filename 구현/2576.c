#include <stdio.h>

int main(){
	int min =99;
	int sum =0;
	for(int i=0;i<7;i++){
		int N; scanf("%d", &N);
		if(N%2==1) sum += N; 
		if(N % 2 == 1 && N<min) min = N; 	
	}
	if(sum==0){
		printf("-1");
		return 0;
	}
	printf("%d\n", sum); printf("%d", min);
}