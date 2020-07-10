#include <stdio.h>

int main(){
	int A;
	scanf("%d",&A);
	for(int i=0;i<A;i++){
		for(int k=0;k<A-1-i;k++){
			printf(" ");
		}
		for(int j=0;j<2*i+1;j++){
			printf("*");
		}
		printf("\n"); 
	}
}