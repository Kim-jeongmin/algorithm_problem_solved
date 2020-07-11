#include <iostream>
using namespace std;

int main() {
	int hour, min;
	cin >> hour >> min;
	if (45 <= min && min <= 60)	min -= 45;
	else {
		hour -= 1;
		min += 15;
		if (hour < 0) hour += 24;
	}
	cout << hour << ' ' << min;
}