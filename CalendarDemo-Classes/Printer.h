/*
 * Printer.h
 *
 *  Created on: Mar 20, 2015
 *      Author: danail
 */

#ifndef PRINTER_H_
#define PRINTER_H_

#include <string>
#include <iostream>

class Printer {
public:
	Printer();
	virtual ~Printer();
	void print(std::string string);
	void print(int number, int width);
	void skip(int symbols);
};

#endif /* PRINTER_H_ */
