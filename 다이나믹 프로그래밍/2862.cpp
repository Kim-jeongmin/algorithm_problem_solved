#include<stdio.h>
#include<algorithm>
using namespace std;
long long int n, fibo[80] = { 1,2 };
int main() {
    scanf("%lld", &n);
    for (int i = 2; i<80; i++)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    int t;
    while (fibo[t = upper_bound(fibo, fibo + 80, n) - fibo - 1] != n)
        n -= fibo[t];
    printf("%lld", n);
    return 0;
}