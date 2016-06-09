/*
 * SoftArchitect.h
 *
 *  Created on: Jun 8, 2016
 *      Author: CCahangama
 */

#ifndef SOFTARCHITECT_H_
#define SOFTARCHITECT_H_
#include "Programmer.h"
#include <iostream>

using namespace std;

class SoftArchitect:public Programmer{

public:
	SoftArchitect();
	SoftArchitect(string,int,long int, int,string,string,long int,int,int,int, long int,string,int,int);
	virtual ~SoftArchitect();

	void addyears(int);
	void getyears();
	void print();
private:
	int years;
};

#endif /* SOFTARCHITECT_H_ */
