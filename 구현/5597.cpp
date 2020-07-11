#include <stdio.h>

int main(){
	int arr[30]={0,};
	int a;
	for(int i;i<28;i++){
		scanf("%d",&a);
		arr[a-1]=a;
	}
	for(int k=0;k<30;k++){
		if(arr[k]==0){
			printf("%d\n",k+1);
		}
	}
}