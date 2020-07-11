#include <stdio.h>

int main(){
	int A;
	scanf("%d",&A);
	int arr[1001]={};
	int sum=0;
	for(int i=0;i<A;i++){
		scanf("%d",&arr[i]);
		
		
	}
	int C;
	scanf("%d",&C);
	for(int k=0;k<A;k++){
		if(arr[k]==C){
			sum+=1;
		}
	}
	printf("%d",sum);
} 