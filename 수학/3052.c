#include <stdio.h>

int main(){
	int arr[42]={0,},a,n=0;
	for(int i=0;i<10;i++){
		scanf("%d",&a);
		int k = a%42;
		arr[k]=1;
	}
	for(int l=0;l<42;l++){
		if(arr[l]==1) n+=1;
	}
	printf("%d",n);
}