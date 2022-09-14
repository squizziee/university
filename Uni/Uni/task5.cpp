#include <iostream>
#include "task5.h"
using namespace std;

double calc(long double a1, long double d, int index);

void task5::deploy()
{
	long long a1, a100;
	long double d;
	cin >> a1 >> a100;
	d = (a100 - a1) / 99.0;
	cout << d << " " << 70.0 / 2.0 * (a1 + calc(a1, d, 70));
}

double calc(long double a1, long double d, int index) {
	return a1 + (index - 1) * d;
}
