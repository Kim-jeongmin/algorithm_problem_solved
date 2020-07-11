#include <stdio.h>

int main(){
	int arr[8]={0,},k=0;
	for(int i=0;i<8;i++){
		scanf("%d",&arr[i]);
	}
	for(int a=0;a<7;a++){
		if(arr[a]<arr[a+1]) k++;
		else if(arr[a]>arr[a+1]) k--;
	}
	if(k==7) printf("ascending");
	else if(k==-7) printf("descending");
	else printf("mixed");
}