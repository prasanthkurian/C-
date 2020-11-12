#include <iostream>

int test_static_var() {
	static int a = 1;
	a += 1;

	return a;
}
