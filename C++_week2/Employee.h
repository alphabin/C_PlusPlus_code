/*
 * Employee.h
 *
 *  Created on: Jun 8, 2016
 *      Author: CCahangama
 */


//This shall serve as the base class

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include "Date.h"
#include <string>
#include <iostream>

using namespace std;

class Employee{
public:
	Employee();
	Employee(string,int,long int, int,string,string,long int,int,int,int);

	virtual ~Employee();

	void addName(string);
	void addId(int);
	void addPhone(long int);
	void addAge(int);
	void addGender(string);
	void addTitle(string);
	void addSalary(long int);
	void addDate(int,int,int);

	void getDate();
	void getSalary();
	void getTitle();
	void getGender();
	void getAge();
	void getPhone();
	void getId();
	void getName();

	void print();

protected:
    string name;
    int empID;
    long int phoneNum;
    int age;
    string jTitle;
    string gender;
    long int salary;
    Date hiredate;


};

#endif /* EMPLOYEE_H_ */
