#include <stdio.h>

  	
int main(){
	int A , B , C;
	scanf("%d %d %d", &A, &B, &C);
	if(A == B && B == C) printf("%d", 10000+A*1000);
	else if (A == B && B != C) printf("%d", 1000+(A*100));
	else if (A == C && B != C) printf("%d", 1000+(C*100));
    else if (C == B && A != C) printf("%d", 1000+(B*100));
    else if (C < B && B < A) printf("%d", A*100);
    else if (B < C && C < A) printf("%d", A*100);
    else if (C < A && A < B) printf("%d", B*100);
    else if (A < C && C < B) printf("%d", B*100);
    else if (A < B && B < C) printf("%d", C*100);
    else if (B < A && A < C) printf("%d", C*100);
    
    return 0;
}