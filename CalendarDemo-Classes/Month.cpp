/*
 * Month.cpp
 *
 *  Created on: Mar 20, 2015
 *      Author: danail
 */

#include <string>
#include <iostream>
#include "Month.h"

Month::Month() {
	this->yearNumber = 0;
	this->name = "";
	this->daysCount = 0;
	this->numberInYear = 0;
}

Month::Month(int yearNumber, int numberInYear, std::string name,
		int daysCount) {
	this->yearNumber = yearNumber;
	this->name = name;
	this->daysCount = daysCount;
	this->numberInYear = numberInYear;
}

Month::~Month() {
	// TODO Auto-generated destructor stub
}

int Month::getDaysCount() {
	return this->daysCount;
}

std::string Month::getName() {
	return this->name;
}

int Month::getDayOfWeek(int dayNumber) {
	return calculateDayOfWeek(dayNumber, this->numberInYear, this->yearNumber);
}

void Month::print(Printer printer) {
	printHeader(printer);
	printDays(printer);

}

int Month::calculateDayOfWeek(int d, int m, int y) {
	static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
	y -= m < 3;
	return (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
}

void Month::printHeader(Printer printer) {
	printer.skip(7);
	printer.print(this->name);
	printer.print("\n S  M  T  W  T  F  S");
	printer.print("\n");
	printer.print("____________________");
	printer.print("\n");
}

void Month::printDays(Printer printer) {
	int weekDay = this->getDayOfWeek(1);
	// Each day is printed in 3 symbols
	printer.skip(3 * weekDay);
	for (int currentDay = 1; currentDay <= this->daysCount; currentDay++) {
		printer.print(currentDay, 2);
		printer.print(" ");

		if (weekDay == 6) {
			printer.print("\n");
			weekDay = 0;
		} else {
			weekDay++;
		}
	}

	printer.print("\n\n");
}
