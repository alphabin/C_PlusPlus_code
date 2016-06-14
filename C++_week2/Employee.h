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

	void addName(string);  //Member to add name
	void addId(int); //Member to add age
	void addPhone(long int); //Member to add phone
	void addAge(int); //Member to add age
	void addGender(string); //Member to add Gender
	void addTitle(string); //Member to add Title
	void addSalary(long int); //Member to add Salary
	void addDate(int,int,int); //Member to construct the date
    void addIntAge(int); //Member to add to age for Assignment 4
	void getDate() const; //Not changing Just access only member function
	void getSalary() const; //Not changing Just access only member function
	void getTitle() const; //Not changing Just access only member function
	void getGender() const; //Not changing Just access only member function
	int getAge() const; //Better Return types for Assignment 4
	long int getPhone() const; //Not changing Just access only member function
	void getId() const; //Not changing Just access only member function
	void getName() const; //Not changing Just access only member function



    bool operator==(Employee); //Overloading the == operator
    Employee operator+(const int &); //Overloading the + operator and returning a type Employee


    void print() const; //Print the internal Employee with no modifications




private:
    string name;  //Private to access only by the member functions
    int empID; //Private to access only by the member functions
    long int phoneNum; //Private to access only by the member functions
    int age; //Private to access only by the member functions
    string jTitle; //Private to access only by the member functions
    string gender; //Private to access only by the member functions
    long int salary; //Private to access only by the member functions
    int month; //Private to access only by the member functions
    int day; //Private to access only by the member functions
    int year; //Private to access only by the member functions
    Date hiredate; //Private to access only by the member functions


};

#endif /* EMPLOYEE_H_ */
