#include <stdio.h>

int main(){
   int N, P;
   int R;
   int list[100];
      scanf("%d %d",&N,&P);
      
      R = N * N % P;
      list[0] = R;
    for(int i=1; i<100; i++){
        list[i] = list[i-1] * N % P;
          for(int j=0; j<i; j++){
           if(list[i] == list[j]){
              printf("%d",i - j);
              return 0;
         }
      }
    }
}