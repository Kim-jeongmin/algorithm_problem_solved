#include <stdio.h>

int main(){
	char a;
	for(int i=1;i<101;i++){
		scanf("%c",&a);
		printf("%c",a);
		if(i%10==0) printf("\n");
	}
	return 0; 
}