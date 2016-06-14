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
	friend ostream& operator<<(ostream&, const Employee);
	friend istream& operator>>(istream&, Employee &);

	virtual ~Employee();

	void addName(string);
	void addId(int);
	void addPhone(long int);
	void addAge(int);
	void addGender(string);
	void addTitle(string);
	void addSalary(long int);
	void addDate(int,int,int);
    void addIntAge(int);
	void getDate();
	void getSalary();
	void getTitle();
	void getGender();
	int getAge();
	//void getPhone();
	long int getPhone();
	void getId();
	void getName();



    bool operator==(Employee);
    Employee operator+(int);


    void print();




private:
    string name;
    int empID;
    long int phoneNum;
    int age;
    string jTitle;
    string gender;
    long int salary;
    int month;
    int day;
    int year;
    Date hiredate;


};

#endif /* EMPLOYEE_H_ */
