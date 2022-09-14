#include <iostream>
#include "task9.h"
using namespace std;

void task9::deploy()
{
	int a, b;
	cin >> a >> b;
	printf("a : %d | b : %d\n", a, b);
	a = a ^ b;
	printf("a : %d | b : %d\n", a, b);
	b = b ^ a;
	printf("a : %d | b : %d\n", a, b);
	a = a ^ b;
	printf("a : %d | b : %d\n", a, b);
}
