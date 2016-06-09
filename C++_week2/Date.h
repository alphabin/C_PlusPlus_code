/*
 * Date.h
 *
 *  Created on: Jun 8, 2016
 *      Author: CCahangama
 */

#ifndef DATE_H_
#define DATE_H_


#include <iostream>

class Date {

public:
	Date(); //Default consturctor
	Date(int,int,int);
	virtual ~Date();
	void printDate();

private:
	int day;
	int month;
	int year;
};



#endif /* DATE_H_ */
