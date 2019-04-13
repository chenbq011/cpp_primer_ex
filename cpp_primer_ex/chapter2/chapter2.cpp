// chapter2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

struct Sales_data
{
	std::string bookNo;
	unsigned int units_sales = 0;
	double revenue = 0;
};

int main()
{
	int num{ 18 };
	int num2(18.88);
	std::cout << "num = " << num << std::endl;
	const int ival = 100;
	const int &rival = ival;

	const float r1 = 3.14;
	const int &r2 = r1;

	std::cout << "r2 = " << r2 << std::endl;

	const int a = 100;

	const int * const p1 = &a;

	const int * p2 = p1;
	
	std::cout << *p2 << std::endl;

	typedef char *pstring;

	pstring name1;

	const pstring name2 = nullptr;

	const pstring *ps;
	
	int val2 = 100;
	int val3 = 200;
	auto val = val2 + val3;
	std::cout << "val = " << val << std::endl;

	int i = 0, &r = i;
	auto aa = r;

	int *p = &i;
	decltype(*p) pi1 = val2;

	struct Sales_data  sales_item;
	sales_item.bookNo = "C++ Primer ÈëÃÅ";
	sales_item.units_sales = 21;
	sales_item.revenue = 100;
	
	std::cout << sales_item.bookNo << std::endl;


	std::cout << "end" << std::endl;
	
}
