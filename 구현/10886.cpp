#include <stdio.h>

int main(){
	int S;
	int N;
	int nc=0;
	int c=0;
	scanf("%d",&S);
	for(int i=0;i<S;i++){
		scanf("%d",&N);
		if (N==0){
			nc+=1;
		}
		else if (N==1){
			c+=1;
		}
	}
	if (nc>c){
		printf("Junhee is not cute!");
	}
	else if (nc<c){
		printf("Junhee is cute!");
	}
}