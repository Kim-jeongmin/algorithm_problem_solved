#include <stdio.h>

int main(){
	int A;
	scanf("%d",&A);
	for(int i=0;i<A;i++){
		for(int n=0;n<i;n++){
			printf(" ");
		}
		for(int k=0;k<2*(A-i)-1;k++){
			if(i!=A-1){
			printf("*");
			}
		}
		if(i!=A-1){
		printf("\n");
		}
	}
	for(int a=0;a<A;a++){
		for(int b=0;b<A-1-a;b++){
			if(a!=0){
			printf(" ");}
		}
		for(int c=0;c<2*(a+1)-1;c++){
			printf("*");
		}
		printf("\n");
	} 
}