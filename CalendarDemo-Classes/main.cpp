#include <iostream>
#include <iomanip>
#include "Printer.h"
#include "Year.h"

int main() {
	unsigned int yearNumber;
	std::cout << "Calendar year? ";
	std::cin >> yearNumber;
	std::cout << "\n";
	Year(yearNumber).print(Printer());

}
