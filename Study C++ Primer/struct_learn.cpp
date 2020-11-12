#include <iostream>
#include <string>
#include "Sales_data.h"

double sold(struct Sales_data *data, unsigned long units) {
	data->revenue += data->price * units;
	return data->revenue;
}

int book_details() {
	struct Sales_data data1, data2;
	unsigned long units;
	std::cin >> data1.bookNo >> data1.price;
	std::cin >> units;
	std::cout << sold(&data1, units) << std::endl;
	std::cout << data1.revenue << std::endl;
	return 0;
}

int book_more_program() {
	struct Sales_data data1, data2;
	double total_revenue;
	unsigned long total_count = 0;
	std::cin >> data1.bookNo >> data1.sold >> data1.price;
	std::cin >> data2.bookNo >> data2.sold >> data2.price;

	data1.revenue = data1.price * data1.sold;
	data2.revenue = data2.price * data2.sold;

	if (data1.bookNo == data2.bookNo) {
		// Add the revenue. and print
		total_revenue = data1.revenue + data2.revenue;
		total_count = data1.sold + data2.sold;
		std::cout << data1.bookNo << " " << data1.price << " " << total_revenue << std::endl;
		
		if (total_revenue != 0) {
			std::cout <<  (total_revenue / total_count) << std::endl;
		}
		else {
			std::cout << "No Sales" << std::endl;
		}
		return 0;
	}
	else {
		std::cout<< "Books entered are not same"<<std::endl;
		return -1;
	}
}

