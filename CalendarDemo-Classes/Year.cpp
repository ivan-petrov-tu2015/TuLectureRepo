/*
 * Year.cpp
 *
 *  Created on: Mar 20, 2015
 *      Author: danail
 */

#include "Year.h"
#include "Month.h"

Year::Year(int yearNumber) {
	this->yearNumber = yearNumber;
	this->months[0] = Month(yearNumber, 1, "January", 31);
	this->months[1] = Month(yearNumber, 2, "February",
			this->isLeapYear() ? 29 : 28);
	this->months[2] = Month(yearNumber, 3, "March", 31);
	this->months[3] = Month(yearNumber, 4, "April", 30);
	this->months[4] = Month(yearNumber, 5, "May", 31);
	this->months[5] = Month(yearNumber, 6, "June", 30);
	this->months[6] = Month(yearNumber, 7, "July", 31);
	this->months[7] = Month(yearNumber, 8, "August", 31);
	this->months[8] = Month(yearNumber, 9, "September", 30);
	this->months[9] = Month(yearNumber, 10, "October", 31);
	this->months[10] = Month(yearNumber, 11, "November", 30);
	this->months[11] = Month(yearNumber, 12, "December", 31);
}

Year::~Year() {
	// TODO Auto-generated destructor stub
}

Month* Year::getMonths() {
	return this->months;
}

bool Year::isLeapYear() {
	//if number is multiple of 4 and is either multiple of 400 or not multiple of 100, is leap year
	return (yearNumber % 4 == 0)
			&& (yearNumber % 100 != 0 || yearNumber % 400 == 0);
}

int Year::getYearNumber() {
	return this->yearNumber;
}

void Year::print(Printer printer) {
	printer.skip(9);
	printer.print(std::to_string(this->yearNumber));
	printer.print("\n");
	for (int i = 0; i < 12; i++) {
		(this->months[i]).print(printer);
	}
}
