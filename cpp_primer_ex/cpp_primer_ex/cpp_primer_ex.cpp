// cpp_primer_ex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void add();
void whileLoop();
void forLoop();
void readSomeNumber();

int main()
{
	//add();
	//whileLoop();
	//forLoop();
	readSomeNumber();
	return 0;

}

void add() 
{
	std::cout << "Enter two number:" << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;
	std::cout << "The sum of " << v1 << " and " << v2
		<< " is " << v1 + v2 << std::endl;
}

void whileLoop()
{
	int sum = 0, val = 1;
	while (val <= 10)
	{
		sum += val;
		++val;
	}
	std::cout << "The sum of 1 to 10 inclusive is "
		<< sum << std::endl;
}

void forLoop()
{
	int sum = 0;
	for (int i = 1; i <= 10; ++i)
	{
		sum += i;
	}
	std::cout << "The sum of 1 to 10 inclusive is "
		<< sum << std::endl;
}

void readSomeNumber()
{
	int sum = 0, value = 0;
	while (std::cin >> value) {
		sum += value;
	}
	std::cout << "sum is " << sum << std::endl;
}