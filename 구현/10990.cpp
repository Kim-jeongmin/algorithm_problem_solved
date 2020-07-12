#include <stdio.h>

int main(){
	int A;
	scanf("%d",&A);
	for(int i=0;i<A;i++){
		for(int k=0;k<A-i-1;k++){
			printf(" ");
		}
		printf("*");
		for(int m=0;m<2*i-1;m++){
			printf(" ");
		}
	if(i>0){
		printf("*");
	}
	printf("\n");
	}
}