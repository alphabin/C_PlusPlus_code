/*
 * Programmer.h
 *
 *  Created on: Jun 8, 2016
 *      Author: CCahangama
 */

#ifndef PROGRAMMER_H_
#define PROGRAMMER_H_

#include "Employee.h"
#include <iostream>

using namespace std;


class Programmer:public Employee{
public:
	Programmer();
	Programmer(string,int,long int, int,string,string,long int,int,int,int, long int,string,int, string ,string );

	void addDept(long int);
	void addSupervisor(string);
	void addPercent(int);
	void cProgram(string);
	void jProgram(string);

	void getDept();
	void getSupervisor();
	void getPercent();
	void getcProgram();
	void getjProgram();
	void print();

	virtual ~Programmer();



protected:

	long int deptNum;
	string superName;
	int percentL;
	string cPProgram;
	string jPProgram;

};

#endif /* PROGRAMMER_H_ */