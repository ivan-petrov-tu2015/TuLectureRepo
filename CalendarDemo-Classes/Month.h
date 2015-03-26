/*
 * Month.h
 *
 *  Created on: Mar 20, 2015
 *      Author: danail
 */

#ifndef MONTH_H_
#define MONTH_H_

#include <string>
#include <iostream>

#include "Printer.h"

class Month {
private:
	std::string name;
	int daysCount;
	int numberInYear;
	int yearNumber;
	void printHeader(Printer printer);
	void printDays(Printer printer);
	int calculateDayOfWeek(int d, int m, int y);

public:
	Month();
	Month(int yearNumber, int numberInYear, std::string name, int daysCount);
	virtual ~Month();

	std::string getName();
	int getDaysCount();
	int getDayOfWeek(int dayNumber);
	void print(Printer printer);
};

#endif /* MONTH_H_ */
