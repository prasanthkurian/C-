#include <iostream>

char *return_an_array() {
	int a[10] = { 1,2,3,4,5,6,7,8,9 };

	return (char*)a;

}

void call_a_func() {
	int* a;
	a = (int *) return_an_array();
	std::cout << a[1] << std::endl;
}