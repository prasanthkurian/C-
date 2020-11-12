/*

declaration

using <namespace_name>::<name>;  => Declaration to use a name from namespace.

keyword "using" or namespace declaration should not be normally used in Header files because
Preprocessor will copy header files contents to the Source code . So that will have unintended effect on the source code if 
it was not planning to use that namespace originally.

*/
#include <iostream>
using std::cin;

int test_using() {
	int testme = 0;
	std::cout << "Testing the using keyword" << std::endl;
	cin >> testme;
	std::cout << testme << std::endl;
	return 0;
}

using std::cout;
using std::endl;
int namespace_exercise1() {
	int val = 0;
	int sum = 0;
	while (val <= 10) {
		sum += val;
		val++;
	}
	cout << "sum of 1 to 10 is" << sum << endl;
	return 0;
}