#ifndef SALES
#define SALES
#include <string>


struct Sales_data {
	std::string bookNo;
	unsigned long sold = 0;
	double price = 0;
	double revenue = 0;
};

#endif