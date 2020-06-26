#include <bits/stdc++.h>
using namespace std;

double Farr[200],Barr[200];
int N,current; 
double a,b,c,d;

void search(){
    for(int i=1;i<=N;i++){
        Farr[i] = Farr[i-1]*a + Barr[i-1]*c;
        Barr[i] = Barr[i-1]*d + Farr[i-1]*b;
    }
}
int main(){
    cin >> N >> current;
    cin >> a >> b >> c >> d;
    if(current == 0) Farr[0] = 1;
    else Barr[0] = 1;
    search();
    int result_Fun = Farr[N] * 1000;
    int result_Bad = Barr[N] * 1000;
    cout << result_Fun << '\n' << result_Bad;
}