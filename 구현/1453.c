#include <stdio.h>

int main(){
	int a,k,sum=0;
	scanf("%d",&a);
	int arr[101]={0,};
	for(int i=0;i<a;i++){
		scanf("%d",&k);
		if(arr[k-1]==0){
			arr[k-1]=k;
		}
		else{
			sum+=1;
		}
		
	}
	printf("%d",sum);
	return 0; 
}