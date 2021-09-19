#include<stdio.h>
#include<algorithm>
using namespace std;
long long int n, m, fibo[80] = { 1,2 };
int main() {
    scanf("%lld", &n);
    m = n;
    for (int i = 2; i<80; i++)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    int t;
    while (fibo[t = upper_bound(fibo, fibo + 80, n) - fibo - 1] != n)
        n -= fibo[t];
    if(n != m) printf("%lld", n);
    else printf("%d", -1);
    return 0;
}