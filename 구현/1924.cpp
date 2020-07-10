#include <iostream>
#include <string>
using namespace std;

string str_day[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
int month_day[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

int main() {
	int fin = 0,num=0;
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < a-1 ; i++) {
		fin += month_day[i];
	}
	fin += b;
	while (fin != 0) {
		num++;
		fin--;
		if (num == 7) num = 0;
	}
	cout << str_day[num];
}