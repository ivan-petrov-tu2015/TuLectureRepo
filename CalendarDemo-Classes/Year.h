/*
 * Year.h
 *
 *  Created on: Mar 20, 2015
 *      Author: danail
 */

#ifndef YEAR_H_
#define YEAR_H_

#include <string>
#include <iostream>
#include <array>
#include "Month.h"

class Year {
private:
	int yearNumber;
	Month months[12];
public:
	Year(int yearNumber);
	virtual ~Year();
	Month* getMonths();
	bool isLeapYear();
	int getYearNumber();
	void print(Printer printer);
};

#endif /* YEAR_H_ */
