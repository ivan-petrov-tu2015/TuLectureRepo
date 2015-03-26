/*
 * Printer.cpp
 *
 *  Created on: Mar 20, 2015
 *      Author: danail
 */
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

#include "Printer.h"

Printer::Printer() {
	// TODO Auto-generated constructor stub

}

Printer::~Printer() {
	// TODO Auto-generated destructor stub
}

void Printer::print(std::string string) {
	cout << string;
}

void Printer::print(int number, int width) {
	cout << setw(width);
	cout << number;
}

void Printer::skip(int symbols) {
	for (int i = 0; i < symbols; i++) {
		print(" ");
	}
}

