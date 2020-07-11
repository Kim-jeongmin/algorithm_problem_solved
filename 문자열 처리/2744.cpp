#include <stdio.h>

int main(){
	char a;
	for(int i;i<100;i++){
		scanf("%c",&a);
		if(a<91 && a>64) printf("%c",a+32);
		else if(a>96 && a<123) printf("%c",a-32);
	}
}