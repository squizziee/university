#include <iostream>
#include "task2.h"
using namespace std;

#define g 9.81

void task2::deploy()
{
	int h;
	cin >> h;
	cout << sqrt(2.0 * h / g);
}