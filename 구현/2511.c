#include <stdio.h>

int main(){
	int Acnt=0,Bcnt=0;
	int A[10],B[10];
	for(int i=0;i<10;i++){
		int a;
		scanf("%d",&a);
		A[i]=a;
	}
	for(int i=0;i<10;i++){
		int b;
		scanf("%d",&b);
		B[i]=b;
	}
	
	for(int i=0;i<10;i++){
		if(A[i]>B[i]) Acnt+=3;
		else if(A[i]==B[i]){
			Acnt++;
			Bcnt++;
		}
		else Bcnt+=3;
	}
	printf("%d %d\n",Acnt,Bcnt);
	int cnt=0;
	if(Acnt>Bcnt) printf("A");
	if(Acnt<Bcnt) printf("B");
	if(Acnt == Bcnt){
		for(int i=9;i>=0;i--){
			if(A[i]>B[i]){
				printf("A");
				break;
			}
			else if(A[i]<B[i]){
				printf("B");
				break;
			}
			else cnt+=1;
		}
		if(cnt==10) printf("D");
		
	}	
}