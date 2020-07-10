#include <stdio.h>

int main(){
	int A;
	scanf("%d",&A);
	for(int i=0;i<A;i++){
		for(int k=0;k<A-1-i;k++){
			printf(" ");
		}
		for(int m=0;m<i+1;m++){
			printf("*");
		}
	printf("\n");
	}
}