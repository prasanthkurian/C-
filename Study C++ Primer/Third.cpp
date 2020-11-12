#include <iostream>

int comment_in_cout() {
	std::cout << "/*";
	std::cout << "*/";
	//std::cout << /* "*/" */;
	std::cout <<  /* "*/" /* "/*" */;
	return 0;
}


void test_while() {
	int val = 1, sum = 0;

	while (val <= 10) {
		sum += val;
		++val;
	}

	std::cout << "sum is " << val << std::endl;
}


void test_for_loop() {
	int sum = 0;

	for (int val = 0; val < 100; val++) {
		sum += val;
	}
	std::cout << "sum is " << sum << std::endl;
	sum = 0;
	for (int val = 0; val < 10; sum += val, ++val);
	std::cout << "sum is " << sum << std::endl;
}

void read_unknown_times() {
	int val = 0, sum = 0;

	while (std::cin >> val) {
		sum += val;
	}
	std::cout << sum << std::endl;
}


void handle_only_range() {
	int num = 0;
	int val = 0, sum = 0;

	std::cin >> val;
	num = val;
	while (std::cin >> val) {
		if (val > num) {
			std::cout << val << " accepted" << std::endl;
			sum += val;
			num = val;
		}
		else {
			std::cout << "Ignore the numbers" << std::endl;
		}
	}
	std::cout << sum << std::endl;
}