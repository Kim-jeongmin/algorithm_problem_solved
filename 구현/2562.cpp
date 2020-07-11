#include <stdio.h>

int main(){
	int N;
	int X;
	int max=0;
	for(int i=0;i<9;i++){
		scanf("%d",&N);
		if(N>max){
			max=N;
			X=i+1;
		}
	}
	printf("%d\n%d",max,X);
	
	return 0;
}